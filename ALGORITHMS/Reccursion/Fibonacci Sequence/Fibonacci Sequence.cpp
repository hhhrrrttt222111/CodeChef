#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
    if (n <= 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n; // Here n is the nth term of the sequence
    cin >> n;

    cout << fibo(n) << endl;

    return 0;
}

// The complexity of the above code is O(2^n).
