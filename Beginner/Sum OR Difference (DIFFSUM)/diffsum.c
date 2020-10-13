#include <stdio.h>

int main(void) 
{
    int a, b, s;
    scanf("%d %d", &a, &b);
    if(a>b) {
        s = a-b;
    }
	else if(a<=b) {
	s = a+b;
    }
    printf("%d", s);
	return 0;
}
