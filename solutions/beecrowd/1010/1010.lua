local s = 0
while true do
    local line = io.read()

    if line == nil then break end

    for b, c in string.gmatch(line, "%d+ (%d+) ([0-9.]+)") do
        s = s + tonumber(b) * (tonumber(c) + 0.0)
    end
end

print(string.format('VALOR A PAGAR: R$ %.2f', s))
