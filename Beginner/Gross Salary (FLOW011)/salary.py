t = int(input())

while t:
    n = int(input())

    if n < 1500:
        HRA = n*0.10
        DA = n*0.9
    else:
        HRA = 500
        DA = n*0.98

    print(n + HRA + DA)

    t = t-1