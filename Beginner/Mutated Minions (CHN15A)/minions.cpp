#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int s=0;
        for(int i=0;i<N;i++){
            int k=arr[i]+K;
            if(k%7==0){
                s++;
            }
        }
        cout<<s<<endl;
    }
	return 0;
}