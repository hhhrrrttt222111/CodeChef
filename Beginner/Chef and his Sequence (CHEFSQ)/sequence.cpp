#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    long int arr[N];
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    int M;
	    cin >>M;
	    long int B[M];
	    for(int j=0;j<M;j++){
	        cin>>B[j];
	    }
	    int count=0;
	    for(int i=0;i<N;i++){
	        if(count==M)
	        break;
	        
	        if(arr[i]==B[count])
	        count++;
	    }
	    if(count==M){
	        std::cout << "Yes" << std::endl;
	    }
	    else {
	        std::cout << "No" << std::endl;
	    }
	}
	return 0;
}
