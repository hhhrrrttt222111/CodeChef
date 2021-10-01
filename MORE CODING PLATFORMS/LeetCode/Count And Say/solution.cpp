class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        
        string temp = countAndSay(n-1);
        string res ="";
        int count=1;
        
        for(int i=1;i<temp.length();i++){
            if(temp[i-1]==temp[i]){
                count++;
            }else{
                res.push_back(count+'0');
                res.push_back(temp[i-1]);
                count = 1;
            }
        }
        res.push_back(count+'0');
        res.push_back(temp[temp.size()-1]);
        
        cout<<n<<" "<<res<<"\n";
        return res;
    }
};