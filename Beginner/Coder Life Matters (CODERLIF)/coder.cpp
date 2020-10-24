#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int S[30];
	    for(int i=0;i<30;i++) {
	        cin>>S[i];
	    }
	    int c =0 ;
	    for(int i=0;i<30;i++) {
	        if(S[i] == 1) {
	            c++;
	            if(c > 5) {
	                cout<<"#coderlifematters"<<endl;
	                break;
	            }
	        }
	        else{
	            c=0;
	        }
	    }
	    if(c <= 5) {
	        cout<<"#allcodersarefun"<<endl;
	    }
	}
	return 0;
}
