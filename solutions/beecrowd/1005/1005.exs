a = IO.gets("")
|> String.trim()
|> String.to_float()

b = IO.gets("")
|> String.trim()
|> String.to_float()

media = (a * 3.5 + b * 7.5) / 11.0
:io.format("MEDIA = ~.5f~n", [media])
