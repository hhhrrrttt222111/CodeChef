#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::vector<std::string> split_string(const std::string &s, int N)
{
    std::vector<std::string> vect;
    if (N > s.size())
        return vect;
    vect.resize(N);
    int n = s.size();
    auto it = s.begin();
    int Nnew = N;
    for (int i = 0; i < N; i++)
    {
        int m = (n + Nnew - 1) / Nnew;
        vect[i] = std::string(it, it + m);
        it += m;
        n = n - m;
        Nnew--;
    }
    return vect;
}
void decode(string a)
{

    if (a == "0000")
        cout << "a";
    if (a == "0001")
        cout << "b";
    if (a == "0010")
        cout << "c";
    if (a == "0011")
        cout << "d";
    if (a == "0100")
        cout << "e";
    if (a == "0101")
        cout << "f";
    if (a == "0110")
        cout << "g";
    if (a == "0111")
        cout << "h";
    if (a == "1000")
        cout << "i";
    if (a == "1001")
        cout << "j";
    if (a == "1010")
        cout << "k";
    if (a == "1011")
        cout << "l";
    if (a == "1100")
        cout << "m";
    if (a == "1101")
        cout << "n";
    if (a == "1110")
        cout << "o";
    if (a == "1111")
        cout << "p";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int N;
        string str;
        cin >> str;
        N = n / 4;
        auto result = split_string(str, N);
        for (auto s : result)
        {
            decode(s);
        }
        cout << "\n";
    }
    return 0;
}
