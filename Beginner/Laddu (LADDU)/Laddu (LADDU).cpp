#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ladoos = 0;
        for(int i=0;i<n;i++){
            string str;
            cin >> str;
            if(str == "CONTEST_WON"){
               int rank;
               cin >> rank;
               int bonus = max(0,20-rank);
               ladoos += (300 + bonus);
            }
            else if(str == "TOP_CONTRIBUTOR"){
                ladoos += 300;
            }
            else if(str == "BUG_FOUND"){
                   int bug;
                   cin >> bug;
                   ladoos += bug;
            }
            else if(str == "CONTEST_HOSTED"){
                ladoos += 50;
            }
        }
        if(s == "INDIAN"){
            cout << ladoos/200 << endl;
        }
        else{
            cout << ladoos/400 << endl;
        }
    }
}
