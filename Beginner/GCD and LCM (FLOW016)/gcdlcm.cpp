#include <iostream> 
using namespace std;

long long gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b) {
	return (a / gcd(a, b)) * b;
}

int main() { 
	int a, b, t;
    cin >> t; // input test cases
    for (int i = 0; i < t; ++i) {
        cin >> a; // first input integer
        cin >> b; // second input integer

        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
	return 0; 
} 
