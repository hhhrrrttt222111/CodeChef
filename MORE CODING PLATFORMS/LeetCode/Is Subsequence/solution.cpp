class Solution {
public:
    // Two pointer approach
    bool isSubsequence(string s2, string s1) {
        int i=s1.length()-1; // length of 1st string
        int j=s2.length()-1; // length of 2nd string
        while(i>=0 && j>=0)
        {
            if(s2[j]==s1[i]) // if the strings are equal move both the ith pointer and jth pointer
            {
                i--;
                j--;
            }

            else
            i--;            // move only the ith pointer
        }
        if(j==-1)
        return true;

        return false;

    }
};
