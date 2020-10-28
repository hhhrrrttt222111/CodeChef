#include <iostream>
#include <cassert>
#include <set>
using namespace std;
int
main()
{
    int t;
    cin >> t;
    while (t-- > 0) {
        string s;
        cin >> s;

        // use a set to guarantee code uniqueness
        set<string> codes;
        assert(s.length() >= 2);
        for (size_t i = 1; i < s.length(); i++) {
            codes.insert(s.substr(i - 1, 2));
        }

        cout << codes.size() << endl;
    }

    return 0;
}
