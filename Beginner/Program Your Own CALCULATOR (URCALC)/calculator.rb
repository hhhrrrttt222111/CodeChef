a = gets.chomp.to_f
b = gets.chomp.to_f
c = gets
if c == "+"
    puts a+b 
elsif c == "-"
    puts a-b
elsif c == "*"
    puts a*b
elsif c == "/"
    puts a/b
else
    puts "invalid choice"
end
