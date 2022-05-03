import subprocess
import os

# Dir for folder of contents
code_dir = "code"


def delete_comments(line):
    if '#' in line:
        line = line[0:line.find('#')]
    return line


def get_sections():
    sections = []
    section_name = None
    with open('contents.txt', 'r') as contents_txt:
        for line in contents_txt:
            line = delete_comments(line)
            line = line.strip()

            if len(line) == 0:
                continue

            if line[0] == '[':
                if section_name is not None:
                    sections.append((section_name, subsections))

                section_name = line[1:-1]
                subsections = []
            else:
                tmp = line.split('\t', 1)
                if len(tmp) == 1:
                    raise ValueError('Subsection parse error: %s' % line)

                filename = tmp[0]
                subsection_name = tmp[1]
                if subsection_name is None:
                    raise ValueError('Subsection given without section')

                subsections.append((filename, subsection_name))
    return sections


def get_subsection_style(filename):
    # Styles for diferent languajes are defined in notebok.tex
    ext = filename.lower().split('.')[-1]
    if ext in ['cpp']:
        return 'cpp'
    else:
        return 'txt'


def get_contents_tex_content(sections):
    tex = ''
    for (section_name, subsections) in sections:
        tex += '\\section{%s}\n' % (section_name)

        for (filename, subsection_name) in subsections:
            tex += '\\subsection{%s}\n' % (subsection_name)
            tex += '\\raggedbottom\\lstinputlisting[style=%s]{%s/%s}\n' % (
                get_subsection_style(filename), code_dir, filename)
            tex += '\\hrulefill\n'

        tex += '\n'
    return tex


def create_contents_tex_file():
    sections = get_sections()
    tex = get_contents_tex_content(sections)
    with open('contents.tex', 'w') as contents_tex:
        contents_tex.write(tex)


def create_pdf():
    # You must have latexmk installed for make the pdf
    # Use latexmk to build pdf from notebook.tex
    print('Please wait while the pdf is making...')
    latexmk_options = ["latexmk", "-pdf", "notebook.tex"]
    try:
        subprocess.call(latexmk_options, stdout=subprocess.DEVNULL,
                        stderr=subprocess.DEVNULL)
        print('notebook.pdf is ready')
    except subprocess.CalledProcessError as e:
        print('Error creating notebook.pdf file: ', e.output)
    # Delete temporary files created by latexmk
    remove_files = ["notebook.fls", "notebook.aux", "notebook.fdb_latexmk",
                    "notebook.log", "notebook.out", "notebook.toc"]
    for file in remove_files:
        if os.path.exists(file):
            os.remove(file)


if __name__ == "__main__":
    create_contents_tex_file()
    create_pdf()
