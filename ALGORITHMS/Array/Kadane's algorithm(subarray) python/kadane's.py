def maxSubArraySum(arr,size):
    
    max_till_now = arr[0]
    max_ending = 0
    
    for i in range(0, size):
        max_ending = max_ending + arr[i]
        if max_ending < 0:
            max_ending = 0
        
        
        elif (max_till_now < max_ending):
            max_till_now = max_ending
            
    return max_till_now


def main():
    n = int(input("enter array size: "))
    print("Enter array: ")
    arr = []
    for i in range(n):
        ele = int(input())
        arr.append(ele)

    print("Maximum Sub Array Sum Is" , maxSubArraySum(arr,len(arr)))

if __name__ == "__main__":
    main()

