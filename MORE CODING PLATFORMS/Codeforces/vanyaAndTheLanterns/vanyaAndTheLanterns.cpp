#include <stdio.h>
#include <algorithm>
using namespace std;

int n, l, i, indexes[1002], diff;

int main ()
{
    scanf("%d%d", &n, &l);
    for(i = 0; i < n; i++){
        scanf("%d", &indexes[i]);
    }
    sort(indexes, indexes+n);
    diff = 2*max(indexes[0], l - indexes[n-1]);
    for(i = 0; i < n -1; i++){
        diff = max(diff, indexes[i+1]- indexes[i]);
    }
    printf("%.10f\n", diff/2.);
    return 0;
}  