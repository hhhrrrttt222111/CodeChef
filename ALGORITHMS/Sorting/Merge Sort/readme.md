# ⭐ BUBBLE SORT
2
​
3
Bubble Sort is the simplest and most classical sorting algorithm that works by comparing and swapping the adjacent elements if they are in wrong order. While this may not be the most efficient sorting way, it is certainly easiest to understand and implement.
4
​
5
#### Example: 
6
​
7
##### Input: [5 1 4 2 8]
8
​
9
##### First Pass: 
10
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. 
11
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4 
12
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2 
13
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
14
​
15
##### Second Pass: 
16
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ) 
17
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2 
18
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
19
( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 ) 
20
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.
21
​
22
##### Third Pass: 
23
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
24
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
25
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
26
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
27
​
28
##### Output: [1 2 4 5 8]
29
​
30
Now, generally we would resort to the above method of implementing bubble sort. Since we are iterating through the array N number of times (N is the numbr of elements in the input array), the time complexity would be O(N^2). We are not using any additional space, so the space complexity would be O(1).
31
​
32
However, if we can somehow inform our algorithm that the array is already sorted, then we wont have to traverse the remaining passes. To do this we can use a flag. Two solutions implementing this approach will be given below. This wont change the worst time complexity but the best time complexity would improve to O(N).
33
​
34
### SOLUTION 1
35
```
36
def bubbleSort(array):
37
    # Write your code here.
38
    for i in range(len(array)):
39
    // This check is to ensure that the array is not already sorted before going through another pass.
40
                alreadySorted = True
41
                for j in range(len(array) - i - 1):
42
                        if array[j] > array[j+1]:
