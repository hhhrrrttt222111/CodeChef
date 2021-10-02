class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int max_profit = INT_MIN;
        int min_price = arr[0];
        
        for(int i=1; i < arr.size(); i++){
            max_profit = max(max_profit,arr[i]-min_price);
            min_price = min(min_price,arr[i]);
        }
        return (max_profit<0?0:max_profit);
    }
};