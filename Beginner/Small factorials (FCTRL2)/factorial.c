#include <stdio.h>

int factorial(int n) {
  	long int ans=1;
	for(int i=1;i<=n;i++){
		ans*=i;
	}
	return ans;
    
}

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T>0) {
		// Read the input a
		int a, b;
		scanf("%d", &a);

		// Compute the ans.
		// Complete the below line.
        if(a==0 || a==1){
		    printf("%d\n", 1);
        }
        else{
            int ans = factorial(a); 
		    printf("%d\n", ans);
        }
		T--;
	}

	return 0;
}