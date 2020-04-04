base_numbers = {
    1: "one",
    2: "two",
    3: "three",
    4: "four",
    5: "five",
    6: "six",
    7: "seven",
    8: "eight",
    9: "nine",
    10: "ten",
    11: "eleven",
    12: "twelve",
    13: "thirteen",
    14: "fourteen",
    15: "fifteen",
    16: "sixteen",
    17: "seventeen",
    18: "eighteen",
    19: "nineteen",
    20: "twenty",
    30: "thirty",
    40: "forty",
    50: "fifty",
    60: "sixty",
    70: "seventy",
    80: "eighty",
    90: "ninety",
}


def number_in_words(number):
    if number == 1000:
        return "one thousand"

    written_number = []
    while number:
        if number >= 100:
            written_number.append(base_numbers[number // 100])
            written_number.append("hundred")
            number -= number // 100 * 100
            if number:
                written_number.append("and")

        sorted_basic_numbers = sorted(base_numbers.items(), reverse=True)
        for basic_number, basic_name in sorted_basic_numbers:
            if basic_number <= number:
                written_number.append(basic_name)
                number %= basic_number
    return " ".join(written_number)


written_numbers_until_1000 = [number_in_words(i) for i in range(1001)]

print(len("".join(written_numbers_until_1000).replace(" ", "")))
