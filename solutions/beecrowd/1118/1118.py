while True:
    grade_sum = 0.0
    valid_grade_count = 0

    while valid_grade_count < 2:
        grade = float(input())

        if grade >= 0.0 and grade <= 10.0:
            grade_sum += grade
            valid_grade_count += 1
        else:
            print("nota invalida")

    print(f"media = {grade_sum / 2.0:.2f}")

    answer = input("novo calculo (1-sim 2-nao)\n")
    while answer not in ["1", "2"]:
        answer = input("novo calculo (1-sim 2-nao)\n")

    if answer == "2":
        break
