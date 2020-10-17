t = int(input())
for i in range(t):
    PS = input()
    P = int(PS.split(" ")[0])
    S = int(PS.split(" ")[1])
    b = (P-((P*P-24*S)**(1/2)))/12
    v = b*(S/2-P*b/4+b*b)
    print(f"{v:.2f}")