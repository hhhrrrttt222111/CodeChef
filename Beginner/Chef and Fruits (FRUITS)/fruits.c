#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);
	while(t--) {
	    int N, M, K, diff;
	    scanf("%d%d%d",&N,&M,&K);
	    diff = N>M ? N-M : M-N;
	    if(diff<K) {
	        printf("0\n");
	    }
	    else {
	        printf("%d\n", diff-K);
	    }
	}
	return 0;
}

