# Algoritmos

O objetivo deste repositório é servir como uma referência de algoritmos e estruturas de dados em C para estudantes.
Vários tópicos estão sendo implementados e disponibilizados pouco a pouco.

## Como usar

Cada algoritmo é mantido no repositório em sua própria pasta, organizados por categoria.

Para compilar os arquivos fonte, tendo o pacote make instalado, escolha uma das opções abaixo: 
- Copie o makefile disponível na raíz do repositório para a pasta do algoritmo desejado, execute o comando ``make``
- Entre na pasta do algoritimo que deseja compilar e execute o comando ``make -f ../../makefile`` colocando "../" suficientes para retornar à pasta onde o makefile se encontra

Um executável chamado "main" será criado, junto com os arquivos objetos necessários.

Para limpar a pasta removendo os arquivos criados execute o comando ``make clean`` ou  ``make clean -f ../../makefile``.

## Atualizações

Futuramente é planejado para o repositório uma wiki ou pasta com documentos contendo explicações teóricas do conteúdo aqui presente.

Sinta-se livre para abrir uma issue e solicitar algum algoritmos ou estrutura específica de sua preferência que ainda não tenha sido implementada, porém atualizações no repositório dependerão da disponibilidade do autor e possíveis colaboradores.
