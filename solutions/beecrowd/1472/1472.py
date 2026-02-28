import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    arcs = map(int, input().split())
    arcs_sum = []

    for index, arc in enumerate(arcs):
        if index == 0:
            arcs_sum.append(arc)
        else:
            arcs_sum.append(arcs_sum[index - 1] + arc)

    triangles = 0
    arcs_len = arcs_sum[-1] // 3
    i = j = k = 0

    while True:
        if arcs_sum[i] + 2 * arcs_len > arcs_sum[-1]:
            break

        while arcs_sum[j] < arcs_sum[i] + arcs_len:
            j += 1

        while arcs_sum[k] < arcs_sum[i] + 2 * arcs_len:
            k += 1

        if (
            arcs_sum[j] == arcs_sum[i] + arcs_len
            and arcs_sum[k] == arcs_sum[i] + 2 * arcs_len
        ):
            triangles += 1

        i += 1

    output(f'{triangles}\n')
