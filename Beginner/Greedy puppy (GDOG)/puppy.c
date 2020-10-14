#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
    int n, k, i, coins, max;
    scanf("%d%d", &n, &k);
    int A[k];
    for(i=1; i<=k; i++){
        A[i]=(n%i);
    }
    max=-1;
    for(i=1; i<=k; i++){
        if(A[i]>max)
        max = A[i];
    }

    printf(" %d \n",max);
	}
	return 0;
}