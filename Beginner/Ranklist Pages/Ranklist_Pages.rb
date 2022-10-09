# cook your code here
number  = gets.chomp.to_i
if 1<=number && number<=1000
    for i in 1..number do 
        page = gets.chomp.to_i
        if 1<=page && number<=1000
            if page%25 == 0
                puts "#{page/25}"
            else
                puts "#{page/25+1}"
            end
        else
            puts "page is out of range"
        end
    end
else
    puts "out of range"
end