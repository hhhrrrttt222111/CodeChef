#include <iostream>
using namespace std;

int main() {
    int t, N, c=0;
    string S;
    cin>>t;

    while (t--) {
        cin>>N;
        cin>>S;
        for(int i=1;i<N;i++){
	       if(S[i]=='a' || S[i]=='e' || S[i]=='i'|| S[i]=='o'||S[i]=='u'){
	               if(S[i-1]!='a' && S[i-1]!='e' && S[i-1]!='i' && S[i-1]!='o' && S[i-1]!='u'){
	                   c++;
	                }
	        }
	   }
       cout<<c<<endl;
    }
    return 0;
}