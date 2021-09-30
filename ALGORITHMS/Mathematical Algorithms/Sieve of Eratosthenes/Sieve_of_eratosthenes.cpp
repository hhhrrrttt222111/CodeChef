#include<bits/stdc++.>
using namespace std;

void Sieve_of_eratosthenes(int n){
	vector<bool> prime(n+1, true);
	
	for(int i=2; i*i<=n; i++){
		if(prime[p]==true){
			for(int p=i*i; p<=n; p+=i){
				prime[p]=false;
			}
		}
	}
	
	for(int i=2; i<=n; i++){
		if(prime[i])
			cout<<i<<" ";
	}
}

int main(){
	cout<<"Enter valur of n: ";
	cin>>n;
	
	cout<<"Prime numbers smaller than or equal to"<<n<<" are: ";
	Sieve_of_eratosthenes(n);
	
	return 0;
}