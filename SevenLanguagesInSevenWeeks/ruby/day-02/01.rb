#File.open('02.rb', 'r') {|f| puts f.gets}

File.open('02.rb', 'r') do |f|
    while line = f.gets
        puts line
    end
end
