for line in eachline(stdin)
    x_m, y_m, x_r, y_r = parse.(Int, split(line))

    println("$(abs(x_r - x_m) + abs(y_r - y_m))")
end
