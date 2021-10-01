#include<stdio.h>
#include<math.h>

void count_sort(int* a, int n){
	int max = a[0];
	
	for (int i=0; i<n; i++){
		if (a[i]>max){
			max = a[i];
		}
	}

    printf("max is %d\n", max);

	int c[max+1];

	for (int i=0; i<max+1; i++){
		c[i]=0;
	}

	for (int i=0; i<n; i++){
		c[a[i]]++;
	}

	for (int i=1; i<max+1; i++){
		c[i]=c[i] + c[i-1];
	}

	int out[n];

	for (int i=n-1; i>=0; i--){
		out[c[a[i]]-1] = a[i];
        c[a[i]]--;
	}

    
	for (int i=0; i<n; i++){
		printf("%d\t", out[i]);
	}
    
}

int main(void){

	int a[] = {1, 3, 5, 7, 4, 3, 4, 4, 1, 4};

	int n = sizeof(a)/sizeof(int);

	count_sort(a, n);

	return 0;
}
