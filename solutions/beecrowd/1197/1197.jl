for line in eachline()
    v, t = parse.(Int16, split(line))
    println(v * t * 2)
end
