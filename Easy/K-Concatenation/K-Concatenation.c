#include <stdio.h>

long long int maximumm(long long int x, long long int y){
    return x > y ? x : y;
}

long long int calsub(long long int a[], long long int n, long long int m){
    long long int i,ans=-1e18,sum=0;
    for(i=0;i<n;i++){
        sum+=a[i%m];
        ans = maximumm(ans, sum);
        if(sum < 0)
        sum=0;
    }
    return ans;
}

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,k;
        scanf("%lld %lld",&n,&k);
        long long int a[n+1],i;
        
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        
        if(k==1)
        printf("%lld\n",calsub(a,n,n));
        else
        printf("%lld\n",calsub(a,n*2,n) + (calsub(a,n*3,n) - calsub(a,n*2,n)) * (k-2));
    }
    return 0;
}
