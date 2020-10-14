#include <iostream>
using namespace std;

int main() {

    int n, d=0;
    cin>>n;

    while(n!=0){
        n/=10;
        d++;  
    }

    if(d==1) {
        cout<<"1";
    }
    else if(d==2) {
        cout<<"2";
    }
    else if(d==3) {
        cout<<"3";
    }
    else {
        cout<<"More than 3 digits";
    }


    return 0;
}
