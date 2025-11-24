while let line = readLine() {
    let numbers = line.split(separator: " ").map { UInt64($0)! }
    let first = numbers[0]
    let last = numbers[1]

    print((last - first + 1) * (first + last) / 2)
}
