#include <iostream>
using namespace std;

int main() {
    int n;
   
    cin>> n;
    if(n%4==0) {
        cout<<n+1;
    }
    else {
        cout<<n-1;
    }
    return 0;
}