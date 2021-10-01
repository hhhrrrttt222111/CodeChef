# August Long Challenge 2021- Division 3- Problem Difficulties (PROBDIFF)

T = int(input())

for _ in range(T):
    List = list(map(int, input().strip().split()))
    Set = set(List)
    if len(Set) == 3 or len(Set) == 4:
        print(2)
    elif len(Set) == 2:
        if List.count(List[0]) == 2:
            print(2)
        else:
            print(1)
    else:
        print(0)
