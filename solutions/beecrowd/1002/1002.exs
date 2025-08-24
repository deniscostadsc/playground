n = IO.gets("") |> String.trim |> String.to_float
IO.puts "A=#{:io_lib.format("~.4f", [n*n*3.14159])}"
