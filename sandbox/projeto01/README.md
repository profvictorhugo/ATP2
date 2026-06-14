# Projeto 01

``
Este projeto visa apresentar conceitos de modularização e criação de bibliotecas próprias.
``

## Estrutura

* programa.c
* |---biblioteca.h
* |---|----biblioteca.c

Sendo:

 1. **programa.c**: arquivo principal que será executado. Ele concentra o fluxo principal do programa 
 2. **biblioteca.h:** arquivo de cabeçalho que poderá ser importado (include) em qualquer arquivo que precise de suas funções. Ele define os protótipos de funções, constantes e variáveis globais de suporte à biblioteca
 3. **biblioteca.c:** arquivo que contém as funções que foram declaradas no arquivo de header (biblioteca.h)

 ## Compilar e executar

 Para compilar, é preciso informar o(s) arquivo(s) *.c* da(s) biblioteca(s):

 ``
 gcc programa.c biblioteca.c -o programa
 ``