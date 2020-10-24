#include<iostream>
#include<string>
using namespace std;

int main(){
	int t; 
    cin>>t;
	while(t>0){
		int N,min; 
        cin>>N;
		int c=0,o=0,d=0,e=0,h=0,f=0;
		for(int i=0; i<N; i++){
			string S;
			cin>>S;
			for(int i=0;i<S.length();i++) {
				if(S[i] == 'c') {
					c++;
					continue;
				}
                else if(S[i] == 'o') {
					o++;
					continue;
				}
                else if(S[i] == 'd') {
					d++;
					continue;
				}
                else if(S[i] == 'e') {
					e++;
					continue;
				}
                else if(S[i] == 'h') {
					h++;
					continue;
				}
                else if(S[i] == 'f') {
					f++;
					continue;
				}
			}
		}
		c = c/2; e = e/2;
		min = c;
		if(min > o) min = o;
		if(min > d) min = d;
		if(min > e) min = e;
		if(min > h) min = h;
		if(min > f) min = f;
		cout<<min<<endl;
		t--;
	}
	return 0;
}