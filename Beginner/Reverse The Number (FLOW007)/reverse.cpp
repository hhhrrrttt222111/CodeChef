#include <stdio.h>

int main(){
	int T, N, digit, number;
	scanf("%d", &T);
	
	for(int i=0;i<T;i++){
		number = 0;
		scanf("%d", &N);
		while(N >0){
			digit = N%10;
			number += digit;
			number *= 10;
			N /= 10;		
		}
		printf("%d\n", number/10);
	}
	return 0;
}