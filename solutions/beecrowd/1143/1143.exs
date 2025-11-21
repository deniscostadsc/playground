n = IO.gets("") |> String.trim() |> String.to_integer()

1..n |> Enum.each(fn i ->
  IO.puts("#{i} #{i * i} #{i * i * i}")
end)
