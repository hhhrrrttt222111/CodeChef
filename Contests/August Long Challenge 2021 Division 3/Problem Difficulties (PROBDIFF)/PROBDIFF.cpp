#include<iostream>
#include<vector>
#include <set>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> v;
        for(int i = 0; i < 4; i++) {
            int input;
            cin >> input;
            v.push_back(input);
        }
        sort(v.begin(), v.end());
        set<int> s;
        for(int x : v) {
            s.insert(x);
        }
        if(s.size() == 4) {
            cout << 2 << endl;
        }else if (s.size() == 3) {
            cout << 2 << endl;
        }else if(s.size() == 2) {
            int b = v[0];
            if(count(v.begin(), v.end(), b) == 2) {
                cout << 2 << endl;
            }else {
                cout << 1 << endl;
            }
        }else {
            cout << 0 << endl;
        }
    }

    return 0;
}
