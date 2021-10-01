def binary_search(end, arr, val):
    start = 0
    while(start<=end):
        mid = int((start+end)/2)
        if arr[mid]>val:
            ans = mid
            end = mid-1
        else:
            start = mid+1
    return ans
  
T = int(input())
for i in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    stack = []
    stack.append(A[0])
    for j in range(1, N):
        if stack[-1]>A[j]:
            stack[binary_search(len(stack)-1,stack, A[j])] = A[j]
        else:
            stack.append(A[j])
    print(len(stack), *stack)