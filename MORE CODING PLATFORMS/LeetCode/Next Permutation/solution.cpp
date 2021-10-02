class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int first = -1;
        int n = arr.size();
        for(int i=n-1; i>=1 ; i--){
            if(arr[i-1] < arr[i]){
                first = i;
                break;
            }
        }
        if(first == -1){
            sort(arr.begin(),arr.end());
            return;
        }
        int second = -1;
        for(int i=first;i<n;i++){
            if(arr[i] > arr[first-1]){
                second = i;
            }
        }
        //swapping first and second
        int temp = arr[second];
        arr[second] = arr[first-1];
        arr[first-1] = temp;
        
        sort(arr.begin()+ first, arr.end());
    }
};