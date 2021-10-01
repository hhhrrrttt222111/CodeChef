/* September Lunchtime 2021- Division 3- Vaccine Dates (VDATES)*/

#include <iostream>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    while(t--){
        int d, l, r;
        cin>>d>>l>>r;       
      
        if (d<l){
            cout<<"Too Early"<<endl;
        }
        else if (r<d){
            cout<<"Too Late"<<endl;
        }
        else if(l<=d || d<=r){
            cout<<"Take second dose now"<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }
	
	
	return 0;
}
