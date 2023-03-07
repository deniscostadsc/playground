import sys

classification_table = {
    'vertebrado': {
        'ave': {
            'carnivoro': 'aguia',
            'onivoro': 'pomba',
        },
        'mamifero': {
            'onivoro': 'homem',
            'herbivoro': 'vaca',
        },
    },
    'invertebrado': {
        'inseto': {
            'hematofago': 'pulga',
            'herbivoro': 'lagarta',
        },
        'anelideo': {
            'hematofago': 'sanguessuga',
            'onivoro': 'minhoca',
        },
    },
}

for body in sys.stdin:
    group = input()
    eating = input()

    print(classification_table[body.strip()][group][eating])
