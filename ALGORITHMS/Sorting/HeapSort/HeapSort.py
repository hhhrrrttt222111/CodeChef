from heapq import heappush,heappop

#create function for heap
def heap_sort(array):
    heap = []
    for element in array:
        heappush(heap, element)
    
    ordered = []
    # element left in the top heap
    while heap:
        ordered.append(heappop(heap))

    return ordered

# array 
array = [14,22,15,3,27,9,16,35,18,22,1]
print('the result of the heap sort:')
print(heap_sort(array))