#!/usr/bin/env ruby

#
# Modify the CSV application to support an each method to return a
# CsvRow object. Use method_missing on that CsvRow to return the value
# for the column for a given heading.
# 
# For example, for the file:
#
#   one, two
#   lions, tigers
#
# allow an API that works like this:
#
#   csv = RubyCsv.new
#   csv.each {|row| puts row.one}
#
# This should print "lions".
#

class CsvRow
    def initialize headers, row
        @headers = headers
        @row = row
    end

    def method_missing name, *args
        @row[@headers.index name.to_s]
    end
end

class ActsAsCsv
    def read
        file = File.new(self.class.to_s.downcase + '.txt' )
        @headers = file.gets.chomp.split(', ')

        file.each do |row|
            @rows << row.chomp.split(', ')
        end
    end

    def headers
        @headers
    end

    def csv_contents
        @rows
    end
    
    def initialize
        @rows = []
        read
    end

    def each &block
        @rows.each do |row|
            block.call CsvRow.new(@headers, row)
        end
    end 
end

class RubyCsv < ActsAsCsv
end

csv = RubyCsv.new
csv.each {|row| puts row.one}
puts
csv.each {|row| puts row.two}
puts
csv.each {|row| puts row.three}
