#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n,sum{},d{};
        cin>>n;
        long long int a[n],b[n];
        vector<int> s1;
        vector<int> s2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            s1.push_back(sum);
        }
        sum=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
            sum+=b[i];
            s2.push_back(sum);
        }
        for(int i=0;i<n;i++){
            if(a[i]==b[i]&&s1[i]==s2[i]){
                d+=a[i];
            }
        }
        cout<<d<<"\n";
    }
}
