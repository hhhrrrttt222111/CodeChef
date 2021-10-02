#include <iostream>
using namespace std;
 
int main() {
    int n, y;
    cin >> n >> y;
 
    int coins[n];
    for (int i = 0; i < n; i++) cin >> coins[i];
 
    int value[(int) 1e6];
    value[0] = 0;
    for (int x = 1; x <= y; x++) {
        value[x] = 2e9;
        for (auto c : coins) {
            if (x-c >= 0) value[x] = min(value[x], value[x-c]+1);        
        }
    }
 
    if (value[y] == 2e9) cout << -1 << endl;
    else cout << value[y] << endl;
 
    return 0;
}