# include <bits/stdc++.h>
using namespace std;

# define MOD 1000000007

int main() {
    // For Fast I/O.
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    
    int n;
    cin >> n;
    int arr[n + 1];
    arr[0] = 1;
    
    for (int i = 1; i <= n; i++) {
        arr[i] = 0;
        for (int j = 1; j <= 6 && i - j >= 0; j++) {
            arr[i] += arr[i - j];
            arr[i] %= MOD;
        }
    }
    
    cout << arr[n] << endl;
 
    return 0;
}