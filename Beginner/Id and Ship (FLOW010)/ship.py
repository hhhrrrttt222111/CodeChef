t = int(input())

while t:
    c = input()
    if c=='b' or c=='B':
        print('BattleShip')
    if c=='c' or c=='C':
        print('Cruiser')
    if c=='D' or c=='d':
        print('Destroyer')
    if c=='F' or c=='f':
        print('Frigate')
    t = t-1