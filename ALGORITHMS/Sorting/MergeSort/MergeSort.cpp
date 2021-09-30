#include<iostream>
using namespace std;

void swapping(int &a, int &b) {     
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // Sort first array
      mergeSort(array, l, m);
      // Sort second array
      mergeSort(array, m+1, r);

      // merge both
      merge(array, l, m, r);
   }
}
int main() {
   int n;
   cin >> n;    // Number of elements in array
   int arr[n];     
   for(int i = 0; i<n; i++) {
      cin >> arr[i];        // Inputting elements into array.
   }
   mergeSort(arr, 0, n-1);     // r = n-1 for last index
   cout << "Sorted Array";
   display(arr, n);
}