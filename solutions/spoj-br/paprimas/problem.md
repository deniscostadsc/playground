http://br.spoj.com/problems/PAPRIMAS/

# Palavras primas

Um número primo é um número que possui somente dois divisores:
ele mesmo e o número 1. Exemplos de números primos são:
1, 2, 3, 5, 17, 101 e 10007.

Neste problema você deve ler um conjunto de palavras, onde
cada palavra é composta somente por letras no intervalo a-z e A-Z.
Cada letra possui um valor específico, a letra a vale 1, a
letra b vale 2 e assim por diante, até a letra z, que vale 26.
Do mesmo modo, a letra A vale 27, a letra B vale 28 e a letra Z vale 52.

Você deve escrever um programa para determinar se uma palavra
é uma palavra prima ou não. Uma palavra é uma palavra prima
se a soma de suas letras é um número primo.

## Entrada

A entrada consiste de um conjunto de palavras. Cada palavra
está sozinha em uma linha e possui L letras, onde $1 \leq L \leq 20$.
A entrada é terminada por fim de arquivo (EOF).

## Saída

Para cada palavra você imprimir: It is a prime word.,
se a soma das letras da palavra é um número primo,
caso contrário você deve imprimir It is not a prime word..

## Exemplo

### Entrada:

```
UFRN
contest
AcM
```

### Saída:

```
It is a prime word.
It is not a prime word.
It is not a prime word.
```
