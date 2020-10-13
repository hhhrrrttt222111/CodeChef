#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a[100];
    cin >> n;
    int odd=0, even=0;
    for(int i=0;i<n;i++) {    
      cin>>a[i];
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    if(even>odd) {
        cout<<"READY FOR BATTLE";
    }
    else {
        cout<<" NOT READY";
    }
    return 0;
}