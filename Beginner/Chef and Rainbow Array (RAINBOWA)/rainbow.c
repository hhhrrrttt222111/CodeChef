#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	
	while (t--){
		
		int N;
		scanf("%d", &N);
		
		int arr[N], i, j, k;
		int flag = 0;
		
		for (i=0; i<N; i++)
			scanf("%d", &arr[i]);
		
		
		for (j=0, k=N-1; j<=N/2; j++,k--){
			if (arr[j] > flag+1)
				break;
			flag = arr[j];

			if (arr[j] != arr[k])
				break;
		}	
		
		if (flag==7 && j==N/2+1)
			printf("yes\n");
		else
			printf("no\n");
	
	}
	
	return 0;
}
