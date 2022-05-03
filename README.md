# Personal-CP-Notebook

This is a repository for my personal competitive programming notebook.

The folder `code` contains the c++ codes used by me in cp competitions.

## Generate PDF Notebook

Requires: [python](https://www.python.org/), [latexmk](https://www.ctan.org/pkg/latexmk/) and [perl](https://strawberryperl.com/) (required for LaTeX compilation).

Run the python script with `python generate_pdf.py`, this script reads the contents of the notebook from `contents.txt`, then generate contents.tex and run latexmk for compile notebook.tex to pdf.

## How to modify contents

`contents.txt` has the following format:

```
[Section name]
subfolder/file.cpp  Description of the file      # Optional end-of-line comment
```

This notebook was inspired by [Stanford ICPC Notebook](https://github.com/jaehyunp/stanfordacm).
