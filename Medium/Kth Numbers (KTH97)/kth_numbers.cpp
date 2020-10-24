#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int mod = 1e9+7;
struct FFTmod {
    const static int LOGN = 18;
    const static int MAXN = 1 << LOGN;
    const double PI = acos(-1);
    const int MOD = 1e9+7;

    int lg2(int n) { return 32 - __builtin_clz(n - 1); }
    typedef complex<double> cpx;
    typedef long long ll;
    int rev[MAXN];
    cpx rt[MAXN];

    void precalc() {
        rt[1] = cpx{1, 0};
        for (int k = 2; k < MAXN; k *= 2) {
            cpx z[] = {1, polar(1.0, PI / k)};
            for (int i = k; i < 2 * k; i++)
                rt[i] = rt[i / 2] * z[i & 1];
        }
    }
    void fft(cpx *a, int n) {
        for (int i = 0; i < n; i++)
            rev[i] = (rev[i / 2] | (i & 1) << lg2(n)) / 2;
        for (int i = 0; i < n; i++)
            if (i < rev[i])
                swap(a[i], a[rev[i]]);
        for (int k = 1; k < n; k *= 2)
            for (int i = 0; i < n; i += 2 * k)
                for (int j = 0; j < k; j++) {
                    auto x = (double *)&rt[j + k], y = (double *)&a[i + j + k];
                    cpx z(x[0] * y[0] - x[1] * y[1], x[0] * y[1] + x[1] * y[0]);
                    a[i + j + k] = a[i + j] - z;
                    a[i + j] += z;
                }
    }

    cpx X[2][MAXN], Y[2][MAXN];
    vector<ll> multiply(const vector<int> &a, const vector<int> &b) {
        fill(X[0], X[0]+MAXN, cpx{0, 0}), fill(X[1], X[1]+MAXN, cpx{0, 0});
        int cut = sqrt(MOD), sz = a.size() + b.size() - 1;
        int n = 1 << lg2(sz);
        vector<ll> res(sz);
        for (int i = 0; i < a.size(); i++)
            X[0][i] = {(double)(a[i] / cut), (double)(a[i] % cut)};
        for (int i = 0; i < b.size(); i++)
            X[1][i] = {(double)(b[i] / cut), (double)(b[i] % cut)};
        fft(X[0], n), fft(X[1], n);
        for (int i = 0; i < n; i++) {
            int j = (n - i) & (n - 1);
            cpx fl = (X[0][i] + conj(X[0][j])) * cpx{0.5, 0}, fs = (X[0][i] - conj(X[0][j])) * cpx{0, -0.5},
                gl = (X[1][i] + conj(X[1][j])) * cpx{0.5, 0}, gs = (X[1][i] - conj(X[1][j])) * cpx{0, -0.5};
            Y[0][-i & (n - i)] = (fl * gl) + (fl * gs) * cpx{0, 1};
            Y[1][-i & (n - i)] = (fs * gl) + (fs * gs) * cpx{0, 1};
        }
        fft(Y[0], n), fft(Y[1], n);
        for (int i = 0; i < sz; i++) {
            Y[0][i] /= n, Y[1][i] /= n;
            ll av = round(Y[0][i].real());
            ll bv = round(Y[0][i].imag()) + round(Y[1][i].real());
            ll cv = round(Y[1][i].imag());
            av %= MOD, bv %= MOD, cv %= MOD;
            res[i] = av * cut * cut + bv * cut + cv;
            res[i] = (res[i] % MOD + MOD) % MOD;
        }
        return res;
    }
}fft;

LL binPow(LL a, LL b){
    LL ans = 1;
    while(b){
        if(b%2 == 1) ans = ans*a%mod;
        a = a*a%mod;
        b/=2;
    }
    return ans;
}

LL f1[100002], f2[100002], X[100002];
int a[100002];
int main(){
    fft.precalc();
    f1[0] = f2[0] = X[0] = 1;
    for(int i=1;i<=100000;i++){
        f1[i] = f1[i-1]*i%mod;
        f2[i] = binPow(f1[i], mod-2);
        X[i] = X[i-1]*2%mod;
    }
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i=0;i<n;i++) scanf("%d", &a[i]);

        vector<int> x, y;
        for(int i=0;i<n;i++){
            x.emplace_back(f1[i]*X[n-i-1]%mod*a[i]%mod);
            y.emplace_back(f2[n-i-1]);
        }
        vector<LL> res = fft.multiply(x, y);

        for(int i=n-1;i<n-1+n;i++){
            LL ans = res[i]*f2[i-(n-1)]%mod;
            printf("%lld ", ans);
        }
        printf("\n");
    }
}
