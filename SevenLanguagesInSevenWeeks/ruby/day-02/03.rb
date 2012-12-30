#!/usr/bin/env ruby

$stack = Array.new

def put_in_stack item
    $stack.push item
end

def remove_from_stack
    $stack.pop
end

put_in_stack 1
put_in_stack 2
put_in_stack 3
remove_from_stack
put_in_stack 4
put_in_stack 5

puts $stack

puts

$queue = Array.new

def put_in_queue item
    $queue.push item
end

def remove_from_queue
    $queue.shift
end

put_in_queue 1
put_in_queue 2
put_in_queue 3
remove_from_queue
put_in_queue 4
put_in_queue 5

puts $queue
