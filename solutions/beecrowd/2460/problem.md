https://judge.beecrowd.com/en/problems/view/2460

# Fila

Com a proximidade da Copa do Mundo, o fluxo de pessoas nas filas para compra de
ingressos aumentou consideravelmente. Como as filas estão cada vez maiores,
pessoas menos pacientes tendem a desistir da compra de ingressos e acabam
deixando as filas, liberando assim vaga para outras pessoas. Quando uma pessoa
deixa a fila, todas as pessoas que estavam atrás dela dão um passo a frente,
sendo assim nunca existe um espaço vago entre duas pessoas. A fila inicialmente
contém N pessoas, cada uma com um identificador diferente. Joãozinho sabe o
estado inicial dela e os identificadores em ordem das pessoas que deixaram a
fila. Sabendo que após o estado inicial nenhuma pessoa entrou mais na fila,
Joãozinho deseja saber o estado final da fila.

## Entrada

A primeira linha contém um inteiro $N (1 \leq N \leq 50000)$ representando a
quantidade de pessoas inicialmente na fila. A segunda linha contém $N$ inteiros
representando os identificadores das pessoas na fila. O primeiro identificador
corresponde ao identificador da primeira pessoa na fila. É garantido que duas
pessoas diferentes não possuem o mesmo identificador. A terceira linha contém um
inteiro $M (1 \leq M \leq 50000$ e $M < N)$ representando a quantidade de
pessoas que deixaram a fila. A quarta linha contém $M$ inteiros representando os
identificadores das pessoas que deixaram a fila (cada identificador está entre 1
e 100000), na ordem em que elas saíram. É garantido que um mesmo identificador
não aparece duas vezes nessa lista.

## Saída

Seu programa deve imprimir uma linha contedo $N$ − $M$ inteiros com os
identificadores das pessoas que permaneceram na fila, em ordem de chegada.
