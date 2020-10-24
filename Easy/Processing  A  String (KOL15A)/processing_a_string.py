s= input("Enter ")
add= 0
for i in s:
    if( i.isnumeric() ):
        add= add+int(i)
print(add)