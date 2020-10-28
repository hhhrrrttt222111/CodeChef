#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int h=1;
	while(h<=t){
	    int m,n,rx,ry,o,x,y;
	    cin>>m>>n;
	    x=0;
	    y=0;
	    cin>>rx>>ry;
	    cin>>o;
	    string s;
	    cin>>s;
	    for(int i=0; i<o; i++){
	        if(s[i]=='L'){x--;}else if(s[i]=='R'){
	            x++;
	        }else if(s[i]=='U'){y++;}else if(s[i]=='D'){
	            y--;
	        }
	    }
	    if(x==rx & y==ry){cout<<"Case"<<" "<<h<<':'<<" "<<"REACHED"<<endl;}else if(x<0 || y<0 || x>m || y>n){
	        cout<<"Case"<<" "<<h<<':'<<" "<<"DANGER"<<endl;}else {cout<<"Case"<<" "<<h<<':'<<" "<<"SOMEWHERE"<<endl;}
	    h++;
	}
	return 0;
}