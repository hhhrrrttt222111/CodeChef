# cook your code here
number = gets.chomp.to_i
for input in 1..number do 
    price, price2 = gets.split.map(&:to_i)
    if price < price2
        puts "first"
    elsif price > price2
        puts "second"
    else
        puts "any"
    end
end