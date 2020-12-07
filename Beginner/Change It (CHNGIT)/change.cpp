#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int max =0;
	    for(int i=0;i<n;i++){
	        int count =0;
	        for(int j=0;j<n;j++){
	            if(arr[i]==arr[j]){
	                count+=1;
	            }
	        }
	        if(count>max){
	            max = count;
	        }
	    }
	    cout<<n-max<<endl;
	    t--;
	}
	return 0;
}
