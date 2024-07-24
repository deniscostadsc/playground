n1, n2, n3, n4 = map(float, input().split())

average = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10

print(f'Media: {average:.1f}')
if average >= 7.0:
    print('Aluno aprovado.')
elif average >= 5.0:
    print('Aluno em exame.')

    final_test = float(input())

    print(f'Nota do exame: {final_test:.1f}')
    if (final_test + average) / 2.0 > 5.0:
        print('Aluno aprovado.')
    else:
        print('Aluno reprovado.')
    print(f'Media final: {(final_test + average) / 2.0:.1f}')
else:
    print('Aluno reprovado.')
