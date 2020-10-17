#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	int T;
	cin >> T;
	while(T--){
	    string s;
	    cin >> s;
	    int f=0;
	    for(int i=0; i<s.length(); i=i+2){
	        if(s[i]==s[i+1]){
	            x=1;
	            break;
	        }
	    }
	    if(f==1){
	        std::cout << "no" << std::endl;
	    }
	    else {
	        std::cout << "yes" << std::endl;
	    }
	}
	return 0;
}
