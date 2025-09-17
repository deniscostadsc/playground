local n = tonumber(io.read("*n"))

for i=1,n do
    print(string.format('%d %d %d', i, i * i, i * i * i))
end
