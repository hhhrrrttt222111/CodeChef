class Solution {
public:
    string convert(string A, int rows) {
        vector<string> arr(rows);
    int n = A.size(),i=0;
    while(i<n){
        for(int j=0; j<rows && i<n; j++){
            arr[j].push_back(A[i]);
            i++;
        }
        for(int j=rows-2; j>0 && i<n; j--){
            arr[j].push_back(A[i]);
            i++;
        }
    }
    string ans;
    for(auto m : arr){
        ans += m;
    }
    return ans;
    }
};