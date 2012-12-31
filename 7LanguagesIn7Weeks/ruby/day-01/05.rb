#!/usr/bin/env ruby

#
# Bonus problem: If you’re feeling the need for a little more, write
# a program that picks a random number. Let a player guess the
# number, telling the player whether the guess is too low or too high.
#
# (Hint: rand(10) will generate a random number from 0 to 9, and
# gets will read a string from the keyboard that you can translate to
# an integer.)
#


number = rand(100)

begin
    guess = gets.to_i
    if guess < number
        puts 'Too low'
    elsif guess > number
        puts 'Too high'
    end
end while guess != number

puts 'Nice try'
