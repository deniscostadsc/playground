_ = IO.gets("")
a = IO.gets("") |> String.trim |> String.to_float
b = IO.gets("") |> String.trim |> String.to_float

IO.puts "TOTAL = R$ #{:io_lib.format("~.2f", [a + b * 0.15])}"
