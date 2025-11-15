while true do
    local line = io.read()

    if line == nil then break end

    if line:find("13") then
        print(line .. " es de Mala Suerte")
    else
        print(line .. " NO es de Mala Suerte")
    end
end
