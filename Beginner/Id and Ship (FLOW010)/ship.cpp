#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        
        if(c=='B' || c=='b') {
            cout<<"BattleShip"<<endl;
        }
        else if(c=='C' || c=='c') {
            cout<<"Cruiser"<<endl;
        }
        else if(c=='D' || c=='d') {
            cout<<"Destroyer"<<endl;
        }
        else {
            cout<<"Frigate"<<endl;
        }
    }
	return 0;
}