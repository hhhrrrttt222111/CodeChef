class Solution {
public:
    int fac(int n){        //to calculate factorial of numbers
        int mod=1e9+7;
        long int result = 1;
        for (int i = 1; i <= n; i++)
            result = (result * i) % mod;
        return (int)result;
    }
    int numPrimeArrangements(int n) {       //prime sieve to compute prime numbers in an array
        int mod = 1e9+7;
        bool primes[n+1];
        memset(primes, true, sizeof(primes));
        primes[0]=false;
        primes[1]=false;
        for(int i=2;i*i<=n;i++){
            if(primes[i]==true){
            for(int j=i*i;j<=n;j+=i)
                primes[j]=false;
            }
        }
        int c=0;
        for(int i=1;i<=n;i++)
            if(primes[i])
                c++;
        long int factp = fac(c)%mod;
        long int factnp = fac(n-c)%mod;
        int finall = (factp*factnp)%mod;    //end result
        return finall;
    }
};
