#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int N;
        int K;
        scanf("%d%d",&N,&K);
        int a[N];
        for(int i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
        int sum=0;
        for(int i=0;i<N;i++){
            if((sum+a[i])<=K){
                sum=sum+a[i];
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
	return 0;
}

