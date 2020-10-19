#include <iostream>

using namespace std;

int main() {
    int N;
    cin>>N;
    
    int r;
    cin>>r;
    
    while(N--){

        int R;
        cin>>R;
        if(R<r)
            cout<<"Bad boi"<<endl;
        else
            cout<<"Good boi"<<endl;
        
    }
	return 0;
}