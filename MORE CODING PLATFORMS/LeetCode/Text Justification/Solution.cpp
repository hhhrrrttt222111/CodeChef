class Solution
{
public:
    string addCenter(vector<string> &words, int i, int j, int cnt, int len, int maxWidth)
    {

        int remainSpace = maxWidth - len;
        int defaultSpace = remainSpace / cnt;
        int extraSpace = remainSpace % cnt;
        string ans = words[i];
        for (int idx = i + 1; idx < j; idx++)
        {
            if (extraSpace != 0)
            {
                ans.push_back(' ');
                extraSpace--;
            }
            for (int space = 0; space < defaultSpace; space++)
            {
                ans.push_back(' ');
            }
            ans += words[idx];
        }
        return ans;
    }

    string addLeft(vector<string> &words, int i, int j, int maxWidth)
    {

        string ans = words[i];
        for (int idx = i + 1; idx < j; idx++)
        {
            ans.push_back(' ');
            ans += words[idx];
        }
        int remain = maxWidth - ans.length();
        for (int s = 0; s < remain; s++)
        {
            ans.push_back(' ');
        }
        return ans;
    }

    vector<string> fullJustify(vector<string> &words, int maxWidth)
    {
        vector<string> ans;
        int n = words.size();

        int i = 0;
        while (i < n)
        {
            int j = i + 1;
            int len = words[i].length();
            int cnt = 0;
            while (j < n && len + words[j].length() + cnt < maxWidth)
            {
                cnt++;
                len += words[j].length();
                j++;
            }
            if (cnt == 0 || j >= n)
            {
                string x = addLeft(words, i, j, maxWidth);
                ans.push_back(x);
            }
            else
            {
                string x = addCenter(words, i, j, cnt, len, maxWidth);
                ans.push_back(x);
            }

            i = j;
        }

        return ans;
    }
};