# cook your code here
number = gets.chomp.to_i
if number.between?(1,10)
    for i in (1..number) do 
        x,y = gets.split.map(&:to_i)
        if x.between?(50,200) && y.between?(50,200)
            result = x-y
            puts "#{result}"
        else
            puts "range should be between 50 to 200"
        end
    end
else
    puts "out of range"
end