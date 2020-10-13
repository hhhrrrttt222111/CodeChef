t = gets.chomp.to_i

num = 0

while t > 0 
    a = gets.chomp()
    rev = a.reverse().to_i
    puts(rev)
    t-=1 
end