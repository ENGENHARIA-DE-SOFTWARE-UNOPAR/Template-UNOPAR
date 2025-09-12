# Template LaTeX para Relatórios da UNOPAR - Engenharia de Software

[![Versão](https://img.shields.io/badge/Versão-1.2-brightgreen.svg)](https://github.com/OgliariNatan/Template-UNOPAR)
[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/OgliariNatan/Template-UNOPAR/blob/main/LICENSE)
<img src="https://img.shields.io/github/languages/code-size/OgliariNatan/Template-UNOPAR?color=violet&style=plastic" />
<img src="https://img.shields.io/github/languages/top/OgliariNatan/Template-UNOPAR?color=violet&label=TeX&style=plastic" />
<img src="https://img.shields.io/badge/Feito%20com-LaTeX-1f425f.svg"/>

## Descrição

Este repositório contém um template LaTeX para a criação de relatórios acadêmicos no curso de Engenharia de Software da Universidade Pitágoras Unopar (UNOPAR). O template facilita a formatação de trabalhos acadêmicos, incluindo elementos pré-textuais (capa, contra-capa, sumário, listas de figuras, tabelas e algoritmos), corpo do texto e referências bibliográficas.

O template é baseado em LaTeX e inclui exemplos de seções, algoritmos, tabelas, figuras, QR codes, gráficos com TikZ e integração com códigos externos.

## Estrutura do Projeto

- `main.tex`: Arquivo principal do documento LaTeX.
- `structure/report.tex`: Estrutura e comandos para elementos pré-textuais.
- `text/write.tex`: Conteúdo principal do relatório (introdução, métodos, resultados, conclusões).
- `text/ref.bib`: Arquivo de referências bibliográficas em formato BibTeX.
- `your_data.tex`: Dados pessoais e informações do relatório (nome, título, etc.).
- `cod/`: Pasta para códigos fonte (ex.: `main.c`).
- `figure/`: Pasta para imagens e figuras.
- `make.sh`: Script para compilar o documento.

## Pré-requisitos

- Distribuição LaTeX instalada (ex.: TeX Live, MiKTeX).
- BibTeX para processamento de referências.
- Editor de texto compatível com LaTeX (ex.: VS Code com extensão LaTeX, Overleaf, TeXstudio).

## Como Usar

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/OgliariNatan/Template-UNOPAR.git
   cd Template-UNOPAR
   ```

2. **Personalize os dados:**
   - Edite o arquivo `your_data.tex` com suas informações pessoais, título do relatório, etc.

3. **Edite o conteúdo:**
   - Modifique `text/write.tex` para adicionar seu texto, algoritmos, tabelas, figuras, etc.
   - Adicione referências em `text/ref.bib`.
   - Inclua códigos em `cod/` e referencie-os no texto.
   - Adicione imagens em `figure/`.

4. **Compile o documento:**
   - Execute o script `make.sh`:
     ```bash
     ./make.sh
     ```
     Ou manualmente:
     ```bash
     pdflatex main.tex
     bibtex main.aux
     pdflatex main.tex
     pdflatex main.tex
     ```

5. **Visualize o PDF:**
   - O arquivo `main.pdf` será gerado na raiz do projeto.

## Exemplos Incluídos

- Algoritmos com pseudocódigo.
- Tabelas e figuras.
- QR codes.
- Gráficos com TikZ (2D e 3D).
- Integração com códigos C externos.
- Referências bibliográficas.

## Contribuição

Contribuições são bem-vindas! Para contribuir:

1. Fork o repositório.
2. Crie uma branch para sua feature (`git checkout -b feature/nova-feature`).
3. Commit suas mudanças (`git commit -am 'Adiciona nova feature'`).
4. Push para a branch (`git push origin feature/nova-feature`).
5. Abra um Pull Request.

## Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENSE) para detalhes.

## Suporte

- Para dúvidas sobre LaTeX, consulte a [wiki do repositório](https://github.com/OgliariNatan/Template-UNOPAR/wiki).
- Editores recomendados: [VS Code](https://code.visualstudio.com/) com extensão LaTeX, [Overleaf](https://www.overleaf.com/), [TeXstudio](https://www.texstudio.org/).

---

**Autor:** OgliariNatan  
**Última atualização:** 12 de setembro de 2025
