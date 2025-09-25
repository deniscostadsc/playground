https://judge.beecrowd.com/en/problems/view/2437

# Distância de Manhattan

Maria é uma moradora de Nlogópolis, uma cidade na Nlogônia que tem uma
característica muito interessante: todas as ruas da cidade ou são orientadas no
sentido norte-sul ou são orientadas no sentido leste-oeste. Isso significa que,
dadas duas ruas, ou elas são paralelas ou elas são perpendiculares entre si.

Todas as ruas da cidade são de mão dupla e é possível seguir em qualquer direção
em um cruzamento.

Agora Maria está atrasada para uma reunião e precisa de sua ajuda. Dadas as
coordenadas iniciais de Maria e da reunião, determine o número mínimo de
cruzamentos que Maria deve atravessar para chegar ao seu destino. Esse número
inclui o cruzamento onde ocorrerá a reunião mas não inclui a posição inicial de
Maria.

## Entrada

A única linha da entrada contém quatro inteiros, $X_m$, $Y_m$, $X_r$, $Y_r (0
\leq X_m, Y_m, X_r, Y_r \leq 1000)$, indicando as coordenadas de Maria $(X_m,
Y_m)$ e da reunião $(X_r, Y_r)$. O ponto de partida de Maria nunca será igual ao
local da reunião, ou seja, pelo menos uma das coordenadas será diferente.

## Saída

Seu programa deve imprimir uma única linha contendo um único inteiro: o número
mínimo de cruzamentos que Maria precisa atravessar para chegar até o local da
reunião.
