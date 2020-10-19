l = gets.chomp.to_i
b = gets.chomp.to_i

a = l*b
p = 2*(l+b)

if a>p 
    puts "Area"
    puts a
elsif a<p
    puts "Peri"
    puts p
else
    puts "Eq"
    puts a
end
