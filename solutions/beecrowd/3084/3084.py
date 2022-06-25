import sys

for line in sys.stdin:
    h_degree, m_degree = map(int, line.split())

    print(f'{h_degree // 30:02d}:{m_degree // 6:02d}')
