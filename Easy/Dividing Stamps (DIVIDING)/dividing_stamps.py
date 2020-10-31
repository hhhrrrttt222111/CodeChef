#A number of stamps can be divided incrementally amongst people if the 
#number of stamps is equal to or exceeds the sum of the range from [1,N]
def divideStamps(N, stamps):
    stamp_count = 0 
    total_per_person = 0

    #Count number of stamps
    for i in range(len(stamps)):
        stamp_count += stamps[i]

    #Count number of stamps per person
    for i in range(N):
        total_per_person += i

    if stamp_count >= total_per_person:
        return 'YES'
    return 'NO'