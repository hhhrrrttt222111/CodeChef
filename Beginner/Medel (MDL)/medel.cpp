#include<iostream>
using namespace std;

void main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        int max = 0, a, min = arr[0], b= 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
                a = i;
            }
            if (arr[i] < min) {
                min = arr[i];
                b = i;
            }
           
        }
        
        if (a < b)
            cout<<max<<" "<<min<<endl;
        else 
            cout<<min<<" "<<max<<endl;
    }
}