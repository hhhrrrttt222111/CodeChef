

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, sum_max=0, sum=0, rem, prod;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
               prod = a[i] * a[j];
               sum = 0;
                while(prod!=0)
                {
                    rem = prod % 10;
                    prod = prod / 10;
                    sum = sum + rem;
                }
            
                if(sum_max < sum)
                {
                    sum_max = sum;
                }
            }
        }
        cout << sum_max << endl;
    }

    return 0;
}
