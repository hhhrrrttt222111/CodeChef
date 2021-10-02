/* Given an array A of size N, having elements 0, 1, 2. Sort the array.

Input:
First line contains N the size of the array A. The second line contains the elements of the array.
Output:
Print the sorted array.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100
Example:

Input:
6
0 1 0 2 1 0

Output:
0 0 0 1 1 2

Explaination: 0, 1, 2 are now in sorted order.

Hint: For this combination of elements like 0s, 1s, 2s always use DNF sort.

Approach: The best and optimized approch would be of DNF sorting algorithm which will take O(N) time complexity.

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    int mid=0, low=0, high=n-1;
    while(mid<high){
        if(a[mid]==0){
            swap(a[mid], a[low]);
            mid++;
            low++;
        }
        else if(a[mid]==1)
            mid++;
        else if(a[mid]==2){
            swap(a[mid], a[high]);
            high--;
        }
    }
    cout<<"After sorting: ";
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    return 0;
}