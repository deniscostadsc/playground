#!/usr/bin/env ruby

#
# How would you translate a hash to an array? Can you translate
# arrays to hashes?
#

h = {'a' => 'abc', 'b' => 'cba'}

a = h.to_a

new_h = Hash[*a]
