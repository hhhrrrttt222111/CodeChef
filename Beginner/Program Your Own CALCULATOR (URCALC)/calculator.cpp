#include<bits/stdc++.h>
using namespace std;

int main() {
    double A,B;
    cin >> A >> B;
    char C;
    cin>>C;
    if(C=='+') {
        cout<<A+B<<endl;
    }
    else if(C=='-') {
        cout<<A-B<<endl;
    }
    else if(C=='*') {
        cout<<A*B<<endl;
    }
    else {
        cout<<A/B<<endl;
    }
}