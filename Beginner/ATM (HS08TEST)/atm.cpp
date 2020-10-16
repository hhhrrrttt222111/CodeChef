#include<iostream>
using namespace std;

int main(){

    int withdraw;
    double balance, total;

    cin >> withdraw >> balance;

    if (withdraw % 5 != 0)
    {
        cout << balance << endl;
    }
    else
    {
        cout << balance - double(withdraw) - 0.5 << endl;
    }

    return 0;
}
