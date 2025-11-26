for line in eachline()
    first, last = parse.(Int64, split(line))
    println(Int((last - first + 1) * (first + last) / 2))
end
