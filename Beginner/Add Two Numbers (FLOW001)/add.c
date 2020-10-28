#include <stdio.h> 

int main() {
	
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);
        int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}