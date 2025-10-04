a = IO.gets("") |> String.trim |> String.to_integer
b = IO.gets("") |> String.trim |> String.to_integer
c = IO.gets("") |> String.trim |> String.to_float

IO.puts "NUMBER = #{a}"
IO.puts "SALARY = U$ #{:io_lib.format("~.2f", [c * b])}"
