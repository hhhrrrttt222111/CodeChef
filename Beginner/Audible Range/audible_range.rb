for input in (1..number) do
    fre = gets.chomp.to_i
    if fre.between?(67, 45000) 
        puts "YES"
    else
        puts "NO"
    end
end
