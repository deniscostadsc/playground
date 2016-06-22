import sys
sys.setrecursionlimit(2 ** 20)

solutions = []

def change(m, a, solution=None):
    if solution is None:
        solution = []

    if m < 0 or not a:
        return 0
    if m == 0:
        solutions.append(solution)
        return 1

    solution.append(a[0])
    r1 = change(m - a[0], a[:], solution[:])
    solution.pop()
    r2 = change(m, a[1:], solution[:])
    return r1 + r2

t = int(input())
for i in range(t):
    n, m = [int(n) for n in input().split()]
    a = [int(n) for n in input().split()]

    change(m, a)
    print(solutions)

