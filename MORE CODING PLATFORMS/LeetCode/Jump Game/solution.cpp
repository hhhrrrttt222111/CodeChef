//LeetCode
//Problem: jump Game 
//Problem Difficulty - Medium
//Author: Varun

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        if(!nums[0] and n>1)
            return 0;
        v[0]=nums[0];
        
        for(int i=1;i<n-1;i++)
        {
            int m = max(v[i-1]-1,nums[i]);
            
            if(m<=0)
                return 0;
            if(m>=n-i)
                return 1;
            v[i]=m;
        }
        return true;
    }
};