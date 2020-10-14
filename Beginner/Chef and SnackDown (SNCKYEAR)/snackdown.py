t = int(input())

year = [2010, 2015, 2016, 2017, 2019]

while t:
    a = int(input())
    if a in year:
        print('HOSTED')
    else:
        print('NOT HOSTED')
    
    t = t-1