#include <stdio.h>


int gcd(int a,int b) {
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
 
int main(void) {

	int t;
	scanf("%d", &t);
	while(t--) {
        
	    int n;
	    scanf("%d", &n);
	    int a[50], i=0;

	    for(i=0; i<n; i++)
	        scanf("%d", &a[i]);
	    int temp = gcd(a[0], a[1]);

	    for(i=2; i<n; i++) {
	        temp = gcd(temp, a[i]);
	    }

	    for(i=0; i<n; i++) {
	        a[i] = a[i]/temp;
	        printf("%d ", a[i]);
	    }
	    printf("\n");
	}
	return 0;
}