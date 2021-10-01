#include <iostream>
using namespace std;

int main() {
	int N;
    cin >> N;
    string A, B;
    cin >> A >> B;
    B = B + B;
    int n = 2*N, m = N;
    int lps[m];
    int len = 0, i = 1;
    lps[0] = 0;
    while(i<m) {
        if(A[i] == A[len]) {
            lps[i++] = ++len;
        }else {
            if(len!=0) len = lps[len-1];
            else lps[i++] = 0;
        }
    }
    int res = 0, best = 0, ans = 0;
    int j = 0;
    i = 0;
    while(i < n) {
        if(A[j] == B[i]) {
            j++;
            i++;
            best++;
        }
        if(best > res) {
            res = best;
            ans = i-j;
        }
        if(j == m) {
            break;
        }
        if(A[j] != B[i]) {
            best = 0;
            if(j != 0) {
                j = lps[j-1];
            }else {
                i++;
            }
        }
    }
    printf("%d\n", ans);
	return 0;
}
