arr = {0:0,1:1}

def coin(n):
    if n in arr:
        return arr[n]
    else:
        arr[n] =  max(n, coin(n//2)+coin(n//3)+coin(n//4))
        
    return arr[n]


while True:
    try:
        a = (input())
        print(coin(int(a)))
    except:
        break


