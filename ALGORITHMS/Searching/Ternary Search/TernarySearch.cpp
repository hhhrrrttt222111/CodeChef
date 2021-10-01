#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int tsearch(int arr[],int n,int key){
    ll l=0,r=n-1,mid1,mid2;
    while(r>=l){
        mid1=l+(r-l)/3,mid2=r-(r-l)/3;
        if(arr[mid1]==key){
            return mid1;
        }
        if(arr[mid2]==key){
            return mid2;
        }
        if(key<arr[mid1]){
            r=mid1-1;
        }
        else if(key>arr[mid2]){
            l=mid2+1;
        }
        else{
            l=mid1+1;
            r=mid2-1;
        }
    };
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    cout<<tsearch(arr,n,key);
}
