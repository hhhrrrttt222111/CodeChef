#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
	    sort(a, a+n);
	    int count =  n;
	    for(int i=0; i<n&&i+1<n; i++){
	        if(a[i]==a[i+1]){
	            count--;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
