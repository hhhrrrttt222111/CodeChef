# Sorting using STL
There is a built-in function in C++ STL by the name of sort().\
This function internally uses IntroSort. In more details it is implemented using hybrid of QuickSort, HeapSort and InsertionSort. By default, it uses QuickSort but if QuickSort is doing unfair partitioning and taking more than N*log(N) time, it switches to HeapSort and when the array size becomes really small, it switches to InsertionSort.
