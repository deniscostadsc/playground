import sys

output = sys.stdout.write
for i in range(0, 21, 2):
    if i == 0 or i == 10 or i == 20:
        output(f'I={float(i) / 10:.0f} J={float(i) / 10 + 1:.0f}\n')
        output(f'I={float(i) / 10:.0f} J={float(i) / 10 + 2:.0f}\n')
        output(f'I={float(i) / 10:.0f} J={float(i) / 10 + 3:.0f}\n')
    else:
        output(f'I={float(i) / 10:.1f} J={float(i) / 10 + 1:.1f}\n')
        output(f'I={float(i) / 10:.1f} J={float(i) / 10 + 2:.1f}\n')
        output(f'I={float(i) / 10:.1f} J={float(i) / 10 + 3:.1f}\n')
