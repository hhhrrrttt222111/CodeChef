#include <bits/stdc++.h>
using namespace std;

const int N = 1 << 11;

int t,n;
int a[N][N];

void update(int x,int y,int k){ for(int i = x;i < N;i+=(i & -i)) for(int j = y;j < N;j+=(j & -j)) a[i][j]+=k; }

int read(int x,int y){ int k = 0; for(int i = x;i > 0;i-=(i & -i)) for(int j = y;j > 0;j-=(j & -j)) k+=a[i][j]; return k; }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1;i <= n;i++) for(int j = 1;j <= n;j++) a[i][j] = 0;
        while(true)
        {
            string s;
            cin >> s;
            if(s=="END") break;
            if(s=="SET")
            {
                int x,y,k;
                cin >> x >> y >> k; x++,y++;
                update(x,y,k-(read(x,y)-read(x-1,y)-read(x,y-1)+read(x-1,y-1)));
            }
            else
            {
                int a,b,c,d;
                cin >> a >> b >> c >> d; a++,b++,c++,d++;
                cout << read(c,d)-read(a-1,d)-read(c,b-1)+read(a-1,b-1) << '\n';
            }
        }
    }
}
