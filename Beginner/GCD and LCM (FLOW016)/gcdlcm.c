#include <stdio.h>

int main(void) {
	int i,t;
	scanf("%d",&t);
	for(i=1; i<=t; i++){
	    long long int a, b, x, y, r, gcd, lcm;
	    scanf("%lld%lld", &x, &y);
	    a = x;
	    b = y;
	    while(b!=0) {
	        r = a%b;
	        a = b;
	        b = r;
	    }
	    gcd = a;
	    lcm = (x*y)/gcd;
	    printf("%lld %lld\n",gcd,lcm);
	}
	return 0;
}