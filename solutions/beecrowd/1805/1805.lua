while true do
    local line = io.read()

    if line == nil then break end

    for first_s, last_s in string.gmatch(line, "(%d+) (%d+)") do
        first = tonumber(first_s)
        last = tonumber(last_s)

        print(math.tointeger((last - first + 1) * (first + last) / 2))
    end
end
