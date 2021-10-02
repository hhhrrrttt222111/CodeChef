class Solution {
public:
    bool lcs(string a,string b){  //function to check longest common subsequence exits between strings
        if(a.size()>b.size())
            return false;
        int j=0;
        for(int i=0;i<b.size();i++){
            if(b[i]==a[j])
                j++;
            if(j==a.size())
                return true;
        }
        return false;
    }
    
    int findLUSlength(vector<string>& strs) {  //we iterate through all strings present in vector and check for lcs 
        int l=strs.size(),ans=-1;                //if not we calculate lenght of string and compare with max else we move to next string
        for(int i=0;i<l;i++){
            bool p=true;
            for(int j=0;j<l;j++){
                if(i==j)
                    continue;
                if(lcs(strs[i],strs[j])){
                    p=false;
                    break;
                }
            }
            if(p)
                ans=max(ans,(int)strs[i].size());
        }
            return ans;
    }
};
