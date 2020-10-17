all_round  = int(input())
ans = []
for round in range(all_round):
    all_bank, cost, *rest = [int(e) for e in input().split()]
    money = 0
    banknote = []
    banknote = list(map(int, input().split()))
    banknote.sort()
    stop = False
    for bank in banknote:
        if(bank<cost):
            ans.append(-1)
            stop = True
            break
        money += bank
    if(not stop):
        ans.append(money//cost)
    
for line in ans:
    print(line)