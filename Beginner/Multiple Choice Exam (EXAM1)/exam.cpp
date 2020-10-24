#include <iostream>
using namespace std;

int main() {
	
	int t = 0; 
	cin >> t; 
	while(t--){
	    int N, c; 
	    cin >> N; 
	    string S, U; 
	    cin >> S; 
	    cin >> U; 
	    
	    int len = S.length(); 
	    c = 0;
	    
	    for(int i =0; i<len; i++){
	        if(S[i] == U[i])
	            c += 1;
	        else if(U[i] == 'N')
	            continue; 
	        else 
	            i++; 
	    }
	    cout << c << endl; 
	}
	
	return 0;
}
