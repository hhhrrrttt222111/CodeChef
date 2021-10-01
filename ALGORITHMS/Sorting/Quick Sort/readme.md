# ⭐ QUICK SORT

Quicksort is an in-place sorting algorithm.Quicksort is a divide-and-conquer algorithm. 
It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, 
according to whether they are less than or greater than the pivot. For this reason, 
it is sometimes called partition-exchange sort.The sub-arrays are then sorted recursively. 
This can be done in-place, requiring small additional amounts of memory to perform the sorting.
#### Example: 

##### Input: `[9, 0, 1, 12, 3], 0, 4` 
###### input1: `array`
###### input0: `start index`
###### input1: `end index`

##### Partition phase: 
`[9, 0, 1, 12, 3]`<br/>
Here, algorithm select `9` as pivot element and swap all the elements less than pivot to the left side of pivot <br/>
and large elements to right side.From start index to end index<br/>
`[3, 0, 1, 9, 12]` <br/>
this is array after first pass as you can see that all the element less than 9 (pivot) are to the left side and large element to right side <br/>
**we can also conclude on thing that pivot is in it's sorted position** <br/>
##### Recursion phase
As we get sorted index of pivot element after that we just have to perform same operation of quick sort on other 2 sides of array <br/>
ie
```py
                                  [9, 0, 1, 12, 3] -> pivot [9]
                                         |
                                  [3, 0, 1, 9, 12]  -> 9 is at its sorted index
                                         |
                            |                         |
                 [3, 0, 1] -> pivot [3]     [12] -> pivot [12] -> sorted           
                            |
                        [0, 1, 3] -> 3 is its srted index
                            |
                 |                      |
      [0, 1] -> pivot [0]       no element to right side
         |
      [0, 1]
         |
         [1] -> pivot [1] -> sorted
               
             output -> [0, 1, 3, 9, 12]
```



##### Output: `[0, 1, 3, 9, 12]`


### Pseudo Code
``` js
// Sorts a (portion of an) array, divides it into partitions, then sorts those
algorithm quicksort(A, lo, hi) is 
  // If indices are in correct order
  if lo < hi then 
    // Partition array and get pivot index
    p := partition(A, lo, hi) 
      
    // Sort the two partitions
    quicksort(A, lo, p - 1) // Left side of pivot
    quicksort(A, p + 1, hi) // Right side of pivot

// Divides array into two partitions
algorithm partition(A, lo, hi) is 
  pivot := A[lo] // The pivot as first element

  // Pivot index
  i := lo 
  
  for j := lo+1 to hi do 
    // If the current element is less than or equal to the pivot
    if A[j] <= pivot then 
      // Move the pivot index forward
      i := i + 1

      // Swap the current element with the element at the pivot
      swap A[i] with A[j] 
  // swap last pivot element with low index
  swap A[i] with A[lo]
  return i // the pivot index
```

#### ⏲️ Time Complexities:
`Best : O(N log n)`
<br/>
`Worst: O(N^2)`  *if all elements are same*

#### 👾 Space complexities:
`O(n)`  *recursion stack space*
