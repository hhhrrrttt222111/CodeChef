class Solution {
public:
    int maxArea(vector<int>& height) {
       /* int size = height.size();
        int i=0, j=size-1;
        int ans = 0;
        int imax,jmax;
        while(i < j){
            int area = min(height[i],height[j]) * (j-i);
            if(area > ans){
                ans = area;
                 imax = i;
                 jmax = j;
            }
            while(height[i] <= height[imax] && i<j){
                i++;
            }
            while(height[j] <= height[jmax] && i<j){
                j--;
            }
        }
        return ans;
        */
        int n = height.size();
    int i = 0, j = n -1;
    int ans = INT_MIN, minh, area;
    while(i<j){
        minh = min(height[i], height[j]);
        area = (j - i) * minh;
        if(ans < area){
           ans = area;
        }
        
        while(i < j && height[i] <= minh){
            i++;
        }
        while(i < j && height[j] <= minh){
            j--;
        } 
    }
    return ans;
    }
};