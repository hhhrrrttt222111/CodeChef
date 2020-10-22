#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int N;
        string S;
        cin>>N>>S;
        int x=0, y=0;
        char p = 'q';
        
        for(int i=0; i<N; i++){
            if(p!='Y'){
                if(S[i]=='U') { 
                    y++; p = 'Y'; 
                }
                else if(S[i]=='D') { 
                    y--; p = 'Y'; 
                }
            }
            if(p!='X'){
                if(S[i]=='R') { 
                    x++; p = 'X'; 
                }
                else if(S[i]=='L') { 
                    x--; p = 'X'; 
                }
            }
        }
        
        cout<<x<<" "<<y<<"\n";
    }
        
	return 0;
}
