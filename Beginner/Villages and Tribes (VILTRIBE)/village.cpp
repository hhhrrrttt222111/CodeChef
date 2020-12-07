#include <iostream>
#include <string>

using namespace std; 
  

int main()  {   
    int t;
    cin>>t;
    while(t--) {
        
		string s;
		cin>>s;
		long long int A=0,B=0,d=0;
		char last='X'; 
		for(int i=0; i<s.size(); i++) {
            if(s[i]=='.')
                d++;
            else {
                if(s[i]=='A')
                    A++;
                else
                    B++;
                    
                if(s[i]==last) {
                    if(s[i]=='A')
                    A+=d;
                    else
                    B+=d;
                }
                d=0;
                last=s[i];
		   }
		}
		cout<<A<<" "<<B<<"\n";
    }
    return 0;
    
}
