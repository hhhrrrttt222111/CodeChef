#include <stdio.h>

int main() {
	int T, i, a, b;
	scanf("%d", &T);
	while(T!=0) {
	    char n[100];
	    scanf("%s", n);
	    a = 0;
	    b = 0;
	    for(i=0; n[i]!='\0'; i++){
            if(n[i]=='a'){
                a = a+1;;
            }
            else if(n[i]=='b'){
                b = b+1;;
            }
	    }
	    if(b>=a) {
	        printf("%d\n", a);
	    }
	    else {
	        printf("%d\n", b);
	    }

	    T=T-1;
	}
	return 0;
}
