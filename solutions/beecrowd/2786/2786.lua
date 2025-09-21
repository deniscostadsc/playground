while true do
    local line = io.read()

    if line == nil then break end

    local width  = tonumber(line)
    local length  = tonumber(io.read())

    print((width * length) + ((width - 1) * (length - 1)))
    print(((width - 1) * 2) + ((length - 1) * 2))
end
