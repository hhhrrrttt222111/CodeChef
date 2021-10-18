#include <iostream>
#include <algorithm>

using namespace std;

/*
Find out the area of the largest rectangle that is not defended 

Approach : 
we just need to maximize delta X and delta Y, since the area of the rectangle is given by delta X and delta Y

Note the distance of the first tower from the start and then not the distance between consecutive towers and then you 
need to note the distance betweeen the last tower and the end

doing the above process for rows will give us max delta Y and doing this for columns will give us max delta X

for every delta X we will have multiple delta Y

Pick the max delta X and max delta Y and their multiplication will give us max undefended area 
*/

int main()
{
    int t, w, h, n;
    cin >> t;

    int x[40011], y[40011];

    while (t--)
    {
        cin >> w >> h >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }

        //sorting

        sort(x, x + n);
        sort(y, y + n);

        //delta x and delta y
        //firstly we will calculate delta x between two consecutive towers and then handle the corner cases
        //here i have considered the contribution of the zeroth tower and i will start from the first row

        int dx = x[0] - 1;
        int dy = y[0] - 1;

        for (int i = 1; i < n; i++)
        {
            dx = max(dx, x[i] - x[i - 1]);
            dy = max(dy, y[i] - y[i - 1]);
        }

        //corner case : last tower from the grid end

        dx = max(dx, w - x[n - 1]);
        dy = max(dy, h - y[n - 1]);

        cout << dx * dy << endl;
    }

    return 0;
}