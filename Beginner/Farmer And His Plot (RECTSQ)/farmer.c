#include<stdio.h>


int gcd(int A,int B) {
    if(B==0)
    return A;
    else
    return gcd(B,A%B);
}

int main() {
    int t, A, B, c; 
    scanf("%d",&t);

    while(t--) {
        scanf("%d%d",&A,&B);
        c = gcd(A,B);
        printf("%d\n",(A*B)/(c*c));
    }
    return 0;
}