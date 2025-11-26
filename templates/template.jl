for line in eachline()
    n, t = parse.(Int64, split(line))
    println(n * t)
end
