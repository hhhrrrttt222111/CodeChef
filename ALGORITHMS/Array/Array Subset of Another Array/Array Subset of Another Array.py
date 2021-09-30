def isSubset( a1, a2, n, m):
    count = 0
    for i in range(m):
        if a2[i] in a1:
            count = count + 1
    if count == m:
        return "Yes"
    else:
        return "No"

def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, m = sz[0], sz[1]
        a1 = [int(x) for x in input().strip().split()]
        a2 = [int(x) for x in input().strip().split()]
        
        print(isSubset( a1, a2, n, m))

        T -= 1

if __name__ == "__main__":
    main()
"""
Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]
"""
