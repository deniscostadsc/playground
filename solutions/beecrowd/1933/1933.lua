while true do
    local line = io.read()

    if line == nil then break end

    for a, b in string.gmatch(line, "([0-9]+) ([0-9]+)") do
        if tonumber(a) > tonumber(b) then
            print(a)
        else
            print(b)
        end
    end
end
