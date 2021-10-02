#You are going to travel to another city that is located 𝑑 miles away from your home city. Your can can travel
#at most 𝑚 miles on a full tank and you start with a full tank. Along your way, there are gas stations at
#distances stop1,stop2 , . . . ,stop𝑛 from your home city. What is the minimum number of refills needed?
def compute_min_refills(distance, tank, stops):# a function that returns the minimum no of refills required by implementing a greedy algorithm
    # write your code here
    if stops[0]>tank:
        return -1
    elif tank>=distance:
        return 0
    else:
        current=0
        num=0
        while current<=len(stops)-2:
            last=current
            while (current<=len(stops)-2 and (stops[current+1]-stops[last]<=tank)):#checks the safe move i.e the max distance one could travel with a full tank
                current+=1
            if last==current:
                return -1
            if current<=len(stops)-2:
                num+=1
        return num  


if __name__ == '__main__':
    d=int(input())
    m=int(input())  
    s=int(input())
    stops=list(map(int,input().split()))
    stops.insert(0,0)
    stops.append(d)
    print("The minimum no of refills required is/are:",compute_min_refills(d, m, stops))
