http://br.spoj.com/problems/PAR/

# Par ou ímpar

Muitas crianças gostam de decidir todas as disputas através do famoso jogo de
Par ou Ímpar. Nesse jogo, um dos participantes escolhe Par e o outro Ímpar.
Após a escolha, os dois jogadores mostram, simultaneamente, uma certa
quantidade de dedos de uma das mãos. Se a soma dos dedos das mãos dos dois
jogadores for par, vence o jogador que escolheu Par inicialmente, caso
contrário vence o que escolheu Ímpar.

## Tarefa

Dada uma seqüência de informações sobre partidas de Par ou Ímpar (nomes dos
jogadores e números que os jogadores escolheram), você deve escrever um
programa para indicar o vencedor de cada uma das partidas.

## Entrada

A entrada é composta de vários conjuntos de testes. A primeira linha de um
conjunto de testes contém um inteiro $N$, que indica o número de partidas de
Par ou Ímpar que aconteceram. As duas linhas seguintes contêm cada uma um nome
de jogador. Um nome de jogador é uma cadeia de no mínimo um e no máximo dez
letras (maiúsculas e minúsculas), sem espaços em branco. As $N$ linhas
seguintes contêm cada uma dois inteiros $A$ e $B$ que representam o número de
dedos que cada jogador mostrou em cada partida $(0 \leq A \leq 5 \space e
\space 0 \leq B \leq 5)$. Em todas as partidas, o primeiro jogador sempre
escolhe Par. O final da entrada é indicado por $N = 0$.


###  Exemplo de entrada

```
3
Pedro
Paulo
2 4
3 5
1 0
2
Claudio
Carlos
1 5
2 3
0
```

## Saída

Para cada conjunto de teste da entrada, seu programa deve produzir a saída da
seguinte forma. A primeira linha deve conter um identificador do conjunto de
teste, no formato "Teste n", onde n é numerado seqüencialmente a partir de 1.
As próximas N linhas devem indicar o nome do vencedor de cada partida. A
próxima linha deve ser deixada em branco. A grafia mostrada no Exemplo de 3
Saída, abaixo, deve ser seguida rigorosamente.

### Exemplo de Saída

```
Teste 1
Pedro
Pedro
Paulo

Teste 2
Claudio
Carlos
```

(esta saída corresponde ao exemplo de entrada acima)

## Restrições

- $0 \leq N \leq 1000$ ($N = 0$ apenas para indicar o fim da entrada)
- $0 \leq A \leq 5$
- $0 \leq B \leq 5$
- $1 \leq comprimento \space do \space nome \space de \space jogador \leq 10$
