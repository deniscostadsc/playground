number = rand(100)

guess = gets.to_i

while guess != number
    if guess < number
        puts 'Too low'
    else
        puts 'Too high'
    end
    guess= gets.to_i
end
puts 'Nice try'
