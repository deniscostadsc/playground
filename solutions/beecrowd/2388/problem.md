https://www.beecrowd.com.br/judge/en/problems/view/2388

# Tacógrafo

Tacógrafos são dispositivos instalados em determinados tipos de veículos, que
registram a velocidade, tempo e distância percorrida por tal veículo. É
utilizada principalmente em veículos de transporte coletivo e de transporte de
cargas, assim ajudando a evitar abusos de velocidade por parte dos motoristas.

A empresa SBC (Sociedade Brasileira dos Caminhoneiros) decidiu encomendar uma
versão um pouco mais básica (e barata) para seus associados não precisarem
gastar tanto na instalação desses aparelhos. Essas versões modificadas registram
apenas os intervalos de tempo e as velocidades médias do caminhão naqueles
intervalos.

Apesar das restrições dos aparelhos novos, a SBC quer poder saber qual foi a
distância percorrida pelos caminhões. Você deverá escrever um programa que
recebe uma série de intervalos de tempo com suas respectivas velocidades médias
e calcula qual foi a distância total percorrida pelo caminhão de acordo com o
tacógrafo.

## Entrada

A primeira linha da entrada contém um inteiro $N (1 \leq N \leq 1000)$
representando a quantidade de intervalos de tempo registrados no tacógrafo. As
$N$ linhas seguintes descrevem os intervalos de tempo. Cada uma dessas linhas
possui dois inteiros $T$ e $V (1 \leq T \leq 100, 0 \leq V \leq 120)$, que
representam, respectivamente o tempo decorrido (em horas) e a velocidade média
(em quilômetros por hora) no intervalo de tempo.

## Saída

Seu programa deve imprimir uma única linha, contendo um único número inteiro
representando a distância total percorrida, em quilômetros.

