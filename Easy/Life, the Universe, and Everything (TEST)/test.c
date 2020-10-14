#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n!=42) {
        printf("%d\n", n);
        scanf("%d", &n);
    }
    return 0;
}