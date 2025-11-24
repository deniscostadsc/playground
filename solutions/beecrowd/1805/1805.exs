IO.stream(:stdio, :line) |>
Enum.each(fn line ->
    [first, last] = line |>
    String.split()|>
    Enum.map(&String.to_integer/1)

    result = div((last - first + 1) * (first + last), 2)
    IO.puts(result)
end)
