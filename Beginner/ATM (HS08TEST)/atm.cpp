#include<iostream>
using namespace std;

int main(){

    int withdraw;
    double balance;

    cin >> withdraw >> balance;

    if (withdraw % 5 == 0 && withdraw + 0.5 <= balance)
    {
        cout << balance - withdraw - 0.5 << endl; 
    }
    else
    {
        cout << balance;
    }

    return 0;
}

