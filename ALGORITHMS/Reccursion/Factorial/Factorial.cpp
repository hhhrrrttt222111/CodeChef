#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n > 1) n *= factorial(n - 1);

    return n;
} 

int main() {
    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}

// Complexity of the above program is O(n)