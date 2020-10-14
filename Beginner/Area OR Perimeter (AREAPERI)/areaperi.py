l = int(input())
b = int(input())

peri = 2*(l+b)
area = l*b

if area>peri:
    print('Area')
    print(area)
elif area<peri:
    print('Peri')
    print(peri)
else:
    print('Eq')
    print(area)