#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    char z;
    z=b[0];
    b[0]=a[0];
    a[0]=z;
    cout<<a<<" "<<b<<endl;

    return 0;
}
