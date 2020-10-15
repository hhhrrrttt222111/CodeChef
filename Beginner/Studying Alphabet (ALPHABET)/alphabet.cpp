#include<iostream>
#include<string>
using namespace std;

int main(){
	string S; 
    cin>>S;
	int arr[26] = {0};

	int i, temp, index;
	char ch;
	int len = S.length();
	
	for(i=0;i<len;i++){
		ch = S[i];
		temp = (int)ch;
		
		index = temp - 97;
		arr[index] = 1;
	}
	
	int N; cin>>N;
	while(N--){
		int count = 0;
		string w; 
        cin>>w;
		len = w.length();
		
		for(i=0;i<len;i++){
			ch = w[i];
			temp = (int)ch;
			
			index = temp - 97;
			
			if(arr[index] == 0){
				count++;
			}
		}
		
		if(count > 0){
			cout << "No" << endl;
		}
        else{
			cout << "Yes" << endl;
		}
	}	
}