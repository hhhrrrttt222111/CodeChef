#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int findDigits(int n) {
    int count=0, temp;      //initializing count and temp integers
    for(int i=n; i>0; i=i/10)
    {
        temp = i%10;        //giving value of the remainder when i is divided by 10
        if(temp ==0)        //if remainder is zero, do nothing
        continue;
        if(n%temp == 0)     //if the number divided by the remainder is zero, then count is incremented
        count++;
    }
    return count;       //return the answer
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        int result = findDigits(n);

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
