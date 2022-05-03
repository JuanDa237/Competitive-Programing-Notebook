<h1 align="center">Personal Competitive Programing Notebook :blue_book:</h1>

This is a repository for my personal competitive programming notebook.

The folder `code` contains the c++ codes used by me in cp competitions.

## How to generate PDF Notebook

Requires: [python](https://www.python.org/), [latexmk](https://www.ctan.org/pkg/latexmk/) and [perl](https://strawberryperl.com/) (required for LaTeX compilation).

Run the python script with `$ python generate_pdf.py`, this script reads the contents of the notebook from `contents.txt`, then generate contents.tex and run latexmk for compile notebook.tex to pdf.

## How to modify content

The file `contents.txt` contains the references to the sources codes. It has the following format:

```
# Optional comment
[Section Title]
[Filename within code directory][tab character \t][Subsection Title] # Optional comment
```

Example:

```
# C++ is the best
[C++]
c++/template.cpp	C++ template # Just a simple template
```

This notebook was inspired by [Stanford ICPC Notebook](https://github.com/jaehyunp/stanfordacm).
