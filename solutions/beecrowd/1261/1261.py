import sys

m, n = map(int, input().split())

responsability_values = {}

for _ in range(m):
    responsability, value = input().split()
    responsability_values[responsability] = int(value)

total_salary = 0
job_description = {}

for line in sys.stdin:
    if line.strip() == '.':
        for responsability, value in responsability_values.items():
            if responsability in job_description:
                total_salary += value * job_description[responsability]

        print(total_salary)

        job_description = {}
        total_salary = 0
    else:
        for word in line.split():
            if word in job_description:
                job_description[word] += 1
            else:
                job_description[word] = 1
