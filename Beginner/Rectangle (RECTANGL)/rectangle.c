#include <stdio.h>

int main(void) {

	int t;
	scanf("%d", &t);
	while(t--){
	   int a, b, c, d;
	   scanf("%d%d%d%d", &a, &b, &c, &d);
	   if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
	    printf("YES\n");
	   else
	    printf("NO\n");
	}
	return 0;
}

