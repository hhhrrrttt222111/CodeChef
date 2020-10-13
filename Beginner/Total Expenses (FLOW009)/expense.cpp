#include <iostream>
#include<cstdio>
using namespace std;

int main() {
    int T;
    cin>>T;
    double a,b;
    while(T--) {
        cin >> a >> b;
        if(a < 1000) {
            double exp = a*b;
            printf("%lf\n", exp);
        }
        else {
            double exp = 0.90 * a * b;
            printf("%lf\n", exp);
        }
    }
	return 0;
}