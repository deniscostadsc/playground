local function isTreeValid (height, diameter, branches)
    return height >= 200 and height <= 300 and diameter >= 50 and branches >= 150
end

local n = tonumber(io.read("*n"))

for _=0,n do
    local line = io.read()
    for height, diameter, branches in string.gmatch(line, "(%w+) (%w+) (%w+)") do
        print(
            isTreeValid(
                tonumber(height),
                tonumber(diameter),
                tonumber(branches)
            )
            and "Sim"
            or "Nao"
        )
    end
end
