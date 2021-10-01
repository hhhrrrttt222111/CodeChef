#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mod 1000000007
#define Pi 3.1415926536
#define vec vector<int>
#define pb emplace_back
#define all(v) v.begin(), v.end()
#define fastIO {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);}
#define get_unique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

signed main(){
    fastIO
    int t; cin >> t;
    while(t--){
        int n;
        cin>>n;
        vec a(n), b(n);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin>>b[i];
    
        int x[n], y[n];
        int t_a = -1, t_b = -1, max = INT64_MAX;
        for(int i=0; i<n; i++){
            int z = (a[0] + b[i])%n;
            if(max > z){
                t_a = i;
                max = z;
            }
            else{
                if(max == z)
                    t_b=i;
            }
        }

        int z = n;
        int i = 0;
        for(int j=t_a; z--; j++){
            x[i] = (a[i] + b[j%n])%n;
            i++;
        }

        if(t_b != -1){
            int z=n;
            int i = 0;
            for(int j=t_b;z--;j++){
                y[i] = (a[i]+b[j%n])%n;
                i++;
            }
        }

        bool f = true;
        if(t_b!=-1){
            for(int i=0;i<n;i++){
                if(y[i] > x[i])
                    break;
                else if(y[i]<x[i]){
                    f = false;
                    break;
                }
            }
        }

        if(f){
            for(int i=0;i<n;i++)
                cout<<x[i]<< " ";
        }else{
            for(int i=0;i<n;i++)
                cout<<y[i]<< " ";
        }
        cout<<endl;
    }
}
