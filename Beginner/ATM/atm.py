input_text = input().split(' ')
x = int(input_text[0])
y = float(input_text[1])

if(x%5==0 and y>x+0.5 and x>0):
    print(y-(x+0.5))
else:
    print(f'{y:.2f}')