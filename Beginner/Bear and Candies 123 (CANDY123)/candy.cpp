#include <iostream>

using namespace std;


int main() {
    int t, A, B, temp;
    cin >> t;
    while (t--) {
        int c = 1;
        cin >> A >> B;
        while (A >= 0 && B >= 0) {
            A = A - c;
            c++;
            if (A < 0) {
                cout << "Bob" << endl;
                break;
            }

            B = B - c;
            c++;
            if (B < 0) {
                cout << "Limak" << endl;
                break;
            }
        }
    }
}