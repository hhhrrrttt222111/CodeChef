total = gets
for i in 1..total.to_i
	num = gets
	temp = num.split(" ")
	add = (temp[0].to_i) + (temp[1].to_i)
	puts add
end