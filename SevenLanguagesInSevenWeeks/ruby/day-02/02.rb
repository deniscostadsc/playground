h = {'a' => 'abc', 'b' => 'cba'}

a = h.to_a

for i in h.keys # There is a better way?
    puts h[i]
end
