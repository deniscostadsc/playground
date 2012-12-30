pattern = ARGV[0]
file = ARGV[1]

File.open(file, 'r') do |f|
    while line = f.gets
        if line.match pattern
            puts line
        end
    end
end
