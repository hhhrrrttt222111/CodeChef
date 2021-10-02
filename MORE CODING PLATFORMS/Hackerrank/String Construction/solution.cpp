#include <bits/stdc++.h>

//Driver code
/*
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
*/


int stringConstruction(string s) {
    map<char,int> m;
    int c=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(m[s[i]]==0)
        {
            m[s[i]]++;
            c++;
        }
    }
    return c;
}

//Driver code
/*
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = stringConstruction(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
*/