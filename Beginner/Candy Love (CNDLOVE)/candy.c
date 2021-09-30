#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    while(num--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int count = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            count = count + arr[i];
        }
        if(count%2 == 0)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}