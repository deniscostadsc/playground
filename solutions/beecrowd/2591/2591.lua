local c = tonumber(io.read("*n"))
io.read() -- go to next line

for i=1,c do
    local line = io.read()
    local first_a, _ = string.find(line, "meka")
    first_a = first_a - 2
    local second_a = string.len(line) - first_a - 6

    print(string.format('k%s', string.rep("a", first_a * second_a)))
end
