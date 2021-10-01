/*
You are given a N × N grid. You need to fill each cell of the grid with 1 or −1. You need to fill the grid in a way such that the following conditions are met :-

For every column - (Sum of values present in the column) x (Product of values present in the column) < 0
For every row - (Sum of values present in the row) x (Product of values present in the row) < 0
It is guaranteed that there exists at least one way to fill the grid under given constraints such that both the conditions are satisifed. If there exists multiple ways to fill the grid by satisfying both the conditions, you can print any.

Input Format:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains a single integer N

Output Format:
For each test case, print the grid of size N × N . Print N lines where each line will contain N integers ( 1 or −1 ) separated by a space
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || n==2)
                cout<<"-1 ";
            else
                cout<<"1 ";
        }
        cout<<"\n";
    }
    
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
