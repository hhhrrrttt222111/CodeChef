#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;
    int ans = 0;
    for (int i = 1; i <= k; i++) {
        ans = max(ans, n % i);
    }
    cout<<ans<<endl;
}

int main() {
    int test;
    cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}