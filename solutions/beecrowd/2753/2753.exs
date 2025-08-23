for x <- 97..122 do
  IO.puts("#{x} e #{<<x::utf8>>}")
end
