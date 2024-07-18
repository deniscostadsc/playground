n = int(input())

for _ in range(n):
    ax, ay, bx, by, cx, cy, dx, dy, rx, ry = map(int, input().split())
    if (
        rx >= ax
        and ry >= ay
        and rx <= bx
        and ry >= by
        and rx <= cx
        and ry <= cy
        and rx >= dx
        and ry <= dy
    ):
        print(1)
    else:
        print(0)
