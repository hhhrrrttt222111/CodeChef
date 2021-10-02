#include<iostream>
using namespace std;
int main()
{
    int t = 0; //no of test cases 0 se jyada
    cin >> t; //test cases enter krna hai yha
    while (t >= 1)
    {
        int n,c,h,k;
        n=c=h=k=0;
        cin >> n >> c >> h >> k; //size | collision

        if (h==k) //origin
        {
            cout<<n<<" "<<n<<"\n";
        }
        else if ((n - k) > (n - h))
        {
            int hw=c%4;
            int x=0,y=0;
            switch (hw)     //wall ko hit ka cases
            {
            case 1:
                x=n;
                y=n-h+k;
                break;
            case 2:
                x=n-h+k;
                y=n;
                break;
            case 3:
                x=0;
                y=h-k;
                break;
            case 0:
                x=h-k;
                y=0;
            }
            cout<<x<<" "<<y<<"\n";
        }
        else
        {
            int hw = c%4; int x,y;
            x=y=0;
            switch (hw)
            {
            case 1:
                x=n-k+h;
                y=n;
                break;
            case 2:
                x=n;
                y=n-k+h;
                break;
            case 3:
                x=k-h;
                y=0;
                break;
            case 0:
                x=0;
                y=k-h;
            }
            cout<<x<<" "<<y<<"\n";
        }
        --t;
    }
    return 0;
}