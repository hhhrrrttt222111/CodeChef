class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2)
    {
        if( num2.size() < num1.size())
            return findMedianSortedArrays (num2, num1);
        int n1 = num1.size();
        int n2 = num2.size();
        
        int low =0, high = n1;
        while(low<=high)
        {
            int cut1 = (low+high)>>1;
            int cut2 = (n1 +n2 +1)/2 - cut1;
            
            int l1 = cut1==0 ? INT_MIN : num1[cut1-1];
            int l2 = cut2==0 ? INT_MIN : num2[cut2-1];
            
            int r1 = cut1==n1 ? INT_MAX : num1[cut1];
            int r2 = cut2==n2 ? INT_MAX : num2[cut2];
            
            if(l1<=r2 && l2<=r1)
            {
                if((n1+n2)%2==0)
                    return (max(l1,l2) + min(r1,r2))/2.0;
                else
                    return (max(l1,l2));
                
            }
            else if(l1>r2)
                high = cut1-1;
            else
                low =cut1+1;
        }
        return 0.0;
        
    }
};
