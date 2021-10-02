def bubbleSort(arr):
    n = len(arr)
    ctr = 0
    for i in range(n):
        swapped = False
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        if swapped == False:
            break
                

lst = [1, 2, 3, 5, 4]
bubbleSort(lst)
# since lists are mutable
# the main list itself changes
print(lst)