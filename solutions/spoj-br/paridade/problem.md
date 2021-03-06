http://br.spoj.com/problems/PARIDADE/

# Paridade

Definimos a paridade de um inteiro n como a soma dos seus
bits em representação binária computada módulo dois. Como
exemplo, o número $21 = 10101_2$ possui três 1s na sua representação
binária e portanto ele possui paridade $3 (mod 2)$, ou 1.

Neste problema, você deverá calcular a paridade de um inteiro
$1 \leq I \leq 2147483647$.

## Entrada

Cada linha da entrada possui um inteiro I e o fim da entrada é
indicado por uma linha onde I = 0, a qual não deve ser processada.

## Saída

Para cada inteiro I na entrada você deve imprimir uma linha The
parity of B is P (mod 2)., onde B é a representação binária de I.

## Exemplo de Entrada

```
1
2
10
21
0
```

## Exemplo de Saída

```
The parity of 1 is 1 (mod 2).
The parity of 10 is 1 (mod 2).
The parity of 1010 is 2 (mod 2).
The parity of 10101 is 3 (mod 2).
```
