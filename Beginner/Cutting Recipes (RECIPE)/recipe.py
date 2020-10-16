from math import gcd
import numpy as np
import itertools

T = input()

for case in np.arange(int(T)):
    inputCase = input()
    listCase = inputCase.split(" ")
    listCase = [int(x) for x in listCase]
    numIngreds = listCase.pop(0)
    gcds = []

    for comb in itertools.combinations(range(numIngreds),2):
        gcds.append(gcd(listCase[comb[0]], listCase[comb[1]]))

    cutIngreds = [x / min(gcds) for x in listCase]
    printStr = ""

    for i in cutIngreds:
        printStr += str(int(i))+" "
    print(printStr)
