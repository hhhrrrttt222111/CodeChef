#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int N, K;
        cin >> N >> K;
        int arr[N+1];
        for(int i = 0;i < N;i++)
            cin >> arr[i];
        sort(arr, arr+N);

        cout<<arr[(N+K)/2]<<endl; 
    }
}
