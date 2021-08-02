local _ = io.read()
local b = tonumber(io.read("*n"))
local c = tonumber(io.read("*n"))

print(string.format('TOTAL = R$ %.2f', b + (c * 0.15)))
