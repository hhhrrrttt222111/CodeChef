#include<stdio.h>

int main(void){
    long long t, n;
    scanf("%lld", &t);
    while (t --)
    {
        long long ans = 0;
        scanf("%lld", &n);
        int i;
        for(i=5;i<=n;i*=5){
            ans += n/i;
        }
        printf("%lld\n", ans);
    }
}