#include <iostream>
using namespace std;

int main() {
    int T, L, R;
    
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>L>>R;
        
        if(R%L==0 || (R-L)>(L-1))
            cout<<-1<<endl;
        else
            cout<<R<<endl;
    }
	return 0;
}
