class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int sum=0;
        int left=0;
        int right=0;
        for(int i=1;i<n-1;i++)
        {
            left=height[i];
            for(int j=0;j<i;j++)
            {
                left=max(left,height[j]);
            }
            right=height[i];
            for(int j=i+1;j<n;j++)
            {
                right=max(right,height[j]);
            }
            sum=sum+(min(left,right)-height[i]);
        }
        return sum;
    }
};