# cook your code here
number = gets.chomp.to_i
if 1<= number && number <=10000
    for i in 1..number do
        x,y,z = gets.split.map(&:to_i)
        if 1<= x && 1<=y && 1<=z && x<= 100 && y<=100 && z<=100 && x!=y && x!=z && y!=x && y!=z && z!= x && z!=y
            
            if x > y && x > z 
                puts "Setter"
            elsif y > x && y > z
                puts "Tester"        
            else
                puts "Editorialist"
            end
        else
            puts "puts the inputs between 1 to 100"
        end
    end
else
    puts "number is out of range"
end