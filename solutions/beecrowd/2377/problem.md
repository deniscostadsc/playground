https://www.beecrowd.com.br/judge/en/problems/view/2377

# Pedágio

A invenção do carro tornou muito mais rápido e mais barato realizar viagens de
longa distância. Realizar uma viagem rodoviária tem dois tipos de custos: cada
quilômetro percorrido na rodovia tem um custo associado (não só devido ao
consumo de combustível mas também devido ao desgaste das peças do carro,
pneus, etc.), mas também é necessário passar por vários pedágios localizados
ao longo da rodovia.

Os pedágios são igualmente espaçados ao logo da rodovia; o começo da estrada
não possui um pedágio, mas o seu final pode estar logo após um pedágio (por
exemplo, se a distância entre dois pedágios consecutivos for de 37 km e a
estrada tiver 111 km, o motorista deve pagar um pedágio aos 37 km, aos 74 km e
aos 111 km, logo antes de terminar a sua viagem).

Dadas as características da rodovia e os custos com gasolina e com pedágios,
calcule o custo total da viagem.

## Entrada

A entrada consiste de duas linhas. A primeira linha da entrada contém dois
inteiros $L$ e $D$ $(1 \leq L, D \leq 10^4)$, indicando o comprimento da
estrada e a distância entre pedágios, respectivamente. A segunda linha contém
dois inteiros $K$ e $P$ $(1 \leq K, P \leq 10^4)$, indicando o custo por
quilômetro percorrido e o valor de cada pedágio. O primeiro pedágio está
localizado no quilômetro D da estrada (ou seja, a distância do início da
estrada para o primeiro pedágio é D quilômetros).

## Saída

Seu programa deve imprimir uma única linha contendo um único inteiro,
indicando o custo total da viagem.


