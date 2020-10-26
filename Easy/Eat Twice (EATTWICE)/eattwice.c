#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m;
	    scanf("%d%d",&n,&m);
	    int d[n],v[n];
	    for(int i=0;i<n;i++)
	        scanf("%d%d",&d[i],&v[i]);
	    int sum=0;
	    int day;
	    int max1=1;
	    int max2=0;
	    for(int i=0;i<n;i++){
	        if(v[i]>max1){
	            if(day!=d[i])
	                max2=max1;
	            max1=v[i];
	            day=d[i];
	        }
	        else if(v[i]>max2 && day!=d[i])
	            max2=v[i];
	    }
	    sum=(max1+max2);
	    printf("%d\n",sum);
	}
	return 0;
}

