#include <iostream>
using namespace std;

int main() {
    int currInp  = 0;
    while(1) { 
        cin >> currInp;
        if(currInp == 42) {
            break;
        }
        cout << currInp << endl;
    }
    return 0;
}