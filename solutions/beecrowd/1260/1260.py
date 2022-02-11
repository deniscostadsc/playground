import sys
from collections import defaultdict

tree_species_count = defaultdict(lambda: 0)
tree_total = 0
line_count = 0


def print_result():
    for tree in sorted(tree_species_count):
        wood_species_percentage = (
            float(tree_species_count[tree]) / float(tree_total) * 100
        )

        print(f'{tree} {wood_species_percentage:.4f}')


for line in sys.stdin:
    line_count += 1

    if line_count <= 2:
        continue

    tree = line.strip()

    if line == '\n':
        print_result()
        print()
        tree_species_count.clear()
        tree_total = 0
        continue

    tree_species_count[tree] += 1
    tree_total += 1


print_result()
