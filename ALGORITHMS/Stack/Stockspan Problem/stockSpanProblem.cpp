#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> stockspan(vector<int> prices) {
    vector<int> ans;
    stack<pair<int, int>> s;
    for(auto price : prices) {
        int days = 1;
        while(!s.empty() && s.top().first <= price) {
            days += s.top().second;
            s.pop();
        }
        s.push({price, days}); //Or use make_pair
        ans.push_back(days);
    }
    return ans;
}

int main() {
    vector<int> a = {100,80,60,70,60,75,85};
    vector<int> res = stockspan(a);
    for(auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}