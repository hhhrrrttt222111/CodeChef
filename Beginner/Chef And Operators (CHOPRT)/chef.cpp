#include <iostream>
using namespace std;


int main() {
    int t;
    int n, m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        if(n>m) {
            cout<<">"<<endl;
        }
        if(n<m) {
            cout<<"<"<<endl;
        }
        if(n==m) {
            cout<<"="<<endl;
        }
    }
	return 0;
}