#Script para compilação de documentos LaTeX com BibTeX
# Autor: OgliariNatan
#pdflatex main.tex && bibtex main.aux && pdflatex main.tex


# Roda com erros
pdflatex main.tex ; bibtex main.aux ; pdflatex main.tex
