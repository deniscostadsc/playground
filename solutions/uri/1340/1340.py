import sys
from collections import deque
import heapq

class DataStructures():
    def __init__(self):
        self.clean()

    def add_to_stack(self, item):
        self.stack.append(item)

    def remove_from_stack(self):
        return self.stack.pop()

    def add_to_queue(self, item):
        self.queue.append(item)

    def remove_from_queue(self):
        return self.queue.popleft()

    def add_to_priority_queue(self, item):
        heapq.heappush(self.priority_queue, item * -1)

    def remove_from_priority_queue(self):
        return heapq.heappop(self.priority_queue) * -1

    def add(self, item):
        self.add_to_stack(item)
        self.add_to_queue(item)
        self.add_to_priority_queue(item)

    def remove(self):
        return {
            'stack': self.remove_from_stack(),
            'queue': self.remove_from_queue(),
            'priority queue': self.remove_from_priority_queue(),
        }

    def clean(self):
        self.stack = []
        self.queue = deque()
        self.priority_queue = []

data_structure_bag = DataStructures()

for test_case_size in sys.stdin:
    test_case_size = int(test_case_size)
    possible_data_structures = ['stack', 'queue', 'priority queue']

    for _ in range(test_case_size):
        command, x = map(int, input().split())

        if command == 1:
            data_structure_bag.add(x)
        else:
            removals = data_structure_bag.remove()
            if x != removals['stack'] and 'stack' in possible_data_structures:
                possible_data_structures.remove('stack')

            if x != removals['queue'] and 'queue' in possible_data_structures:
                possible_data_structures.remove('queue')

            if x != removals['priority queue'] and 'priority queue' in possible_data_structures:
                possible_data_structures.remove('priority queue')

    if len(possible_data_structures) == 1:
        print(possible_data_structures[0])
    elif len(possible_data_structures) > 1:
        print('not sure')
    else:
        print('impossible')

    data_structure_bag.clean()
