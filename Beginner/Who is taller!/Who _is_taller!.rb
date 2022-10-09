number = gets.chomp.to_i
if number.between?(1,1000)
    for i in (1..number) do 
        x,y = gets.split.map(&:to_i)
        if x.between?(100,200) && y.between?(100,200)
            if x < y 
                puts "B"
            else 
                puts "A"
            end            
        else
            puts "age  should be between 1 to 100"
        end
    end
else
    puts "out of range"
end
