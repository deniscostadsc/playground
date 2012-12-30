#!/usr/bin/env ruby

#
# Can you iterate through a hash?
#

h = {'a' => 'abc', 'b' => 'cba'}

for key in h.keys
    puts key + " - " + h[key]
end

h.each {|key, value| puts key + " - " + value}