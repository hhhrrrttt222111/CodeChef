def insertionSort(arr):
    for i in range(1, len(arr)): 
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j] :
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key


lst = [1, 2, 3, 5, 4]
insertionSort(lst)
# since lists are mutable
# the main list itself changes
print(lst)