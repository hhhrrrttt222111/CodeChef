def BubbleSort(array):
    if len(array) <= 1:
        return array
    for _ in array:
        for i in range(len(array)):
            for z in range(i):
                if array[z] > array[z + 1]:
                    array[z], array[z + 1] = array[z + 1], array[z]
    return array
