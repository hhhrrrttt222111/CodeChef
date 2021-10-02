#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int tc=0; tc<t; tc++){
        vector<vector<int>> result;
       int n,a;
       cin>>n;
       vector<int> arr;
       for(int i=0; i<n; i++){
           cin>>a;
           arr.push_back(a);
       }
       deque<int> q;
       int i,min = INT_MAX;
        for(i=0; i<n; i++){
            if(arr[i] == 1)
            break;
            if(arr[i] < min){
                min = arr[i];
            q.push_front(arr[i]);
            }
            else
            q.push_back(arr[i]);
        }
    
        cout<<1<<" ";
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop_front();
        }
        for(int j=i+1; i<n; i++){
            if(arr[i] != 1)
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
}
