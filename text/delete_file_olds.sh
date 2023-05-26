#!/bin/bash
#
#####	NOME:				delete_file_olds.sh
#####	VERSÃO:				0.1
#####	DESCRIÇÃO:			Implementação rotina de remoção de arquivos com mais de 90dias da lixeira
#####	DATA DA CRIAÇÃO:	26/05/2023
#####	ESCRITO POR:		Natan Ogliari
#####	E-MAIL:				natanogliari@gmail.com
#####	DISTRO:				Ubuntu GNU/Linux 22.04
#####	LICENÇA:			MIT license
#####	PROJETO:			https://github.com/OgliariNatan/rotina_backup

cd /home/servidor/Área\ de\ Trabalho\lixeira

sudo find . -type f -mtime +90 -delete
