#include <stdio.h> 

int main() {
	int n, k,ans;
	scanf("%d %d", &n, &k);
	ans = 0;
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		
		if (t % k == 0) {
			ans++;
		}		
	}
	printf("%d\n", ans);
	return 0;
}
