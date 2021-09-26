length = int(input())
breath = int(input())

peri = 2*(length+breath)
area = length*breath

if area>peri:
    print('Area')
    print(area)
elif area<peri:
    print('Peri')
    print(peri)
else:
    print('Eq')
    print(area)
