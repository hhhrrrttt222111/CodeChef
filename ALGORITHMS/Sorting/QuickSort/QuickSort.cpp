#include <stdio.h>

int n;

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int partition(int A[], int low, int high) {
    int pivot = A[high]; 
    int i = low;      

    for (int j = low; j < high; j++) {
        if (A[j] < pivot)
            swap(&A[j], &A[i++]); 
    }
    swap(&A[i], &A[high]);

    return i;
}


void quickSort(int A[], int low, int high) {
    if (low >= high)
        return;
    int j = partition(A, low, high);
    quickSort(A, low, j - 1);
    quickSort(A, j + 1, high);
}


void main() {
    int A[100], i;

    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }

    quickSort(A, 0, n - 1);
    printf("Array after quick Sort:\n");

    for (i=0; i<n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
