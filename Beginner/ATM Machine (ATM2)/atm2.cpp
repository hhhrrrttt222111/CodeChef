#include <iostream>
using namespace std;
#define int long long
signed main() {
    
    int t;
    cin>>t;
    while(t--){

        int n,k,i;
        cin>>n>>k;
        for(i=0;i<n;i++){
            int no;
            cin>>no;
            if(k-no>=0){
                cout<<"1";
                k=k-no;
            }
            else cout<<"0";

        }
        cout<<endl;


    }

    return 0;
}
