while true do
    local line = io.read()
    if line == nil then break end

    for x_m, y_m, x_r, y_r in string.gmatch(line, "(%w+) (%w+) (%w+) (%w+)") do
        print(
            math.abs(tonumber(x_r) - tonumber(x_m)) + math.abs(tonumber(y_r) - tonumber(y_m))
        )
    end
end
