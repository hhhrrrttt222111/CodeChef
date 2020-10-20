#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int N;
        cin>>N;
        int A[N], ans[N];

        for (int i = 0; i < N; i++)
            cin>>A[i];
        
        int s;
        for (int i = 0; i < N; i++) {
            s = 0;
            for (int j = i; j < N; j++) {
                if (A[j] == A[i])   
                    continue;
                else
                    s++;
            }
            ans[i] = s;
        }
        for (int i = 0; i < N; i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}