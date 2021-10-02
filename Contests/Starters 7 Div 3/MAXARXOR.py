t = int(input())
for i in range(1,t+1):
    N,k= map(int, input().strip().split())
    max=(2**N)-1
    if (k>=(2**(N-1))):
        k = (2**(N-1))
    else :
        k = k
    any = (0^max)
    ans = any*(2*k) 
    print(ans)