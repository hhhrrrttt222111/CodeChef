#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, key, a;
        cin >> n;
        cin >> key;
        cin >> a;

        int speed;
        int fast = 0;
        for(int i = 0 ; i < n-1 ; i++){
            int x;
            cin >> x;
            fast = max(fast, x);
        }
        cin >> speed;

        if(key < 0){
            if(speed > fast){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }else{
            if((speed+(a-1)*key) > fast){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            } 
        }
    }

    return 0;
}