h = IO.gets("") |> String.trim |> String.to_integer
s = IO.gets("") |> String.trim |> String.to_integer
IO.puts "#{:io_lib.format("~.3f", [h * s / 12.0])}"
