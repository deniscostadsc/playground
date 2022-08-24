import sys

for line in sys.stdin:
    children_count = int(line.strip())
    all_children = []
    behaved_count = 0
    misbehaved_count = 0

    while children_count:
        is_misbehaving, child_name = input().split()
        all_children.append(child_name)

        if is_misbehaving == '+':
            behaved_count += 1
        else:
            misbehaved_count += 1

        children_count -= 1

    all_children.sort()

    for child_name in all_children:
        print(child_name)

    print(
        f'Se comportaram: {behaved_count} | Nao se comportaram: {misbehaved_count}'
    )
