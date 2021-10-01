#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mod 998244353
long long int power(long long x, long long int y,long long int p) 
{ 
    long long int res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
}
long long fast_power(long long base, long long power, long long MOD) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) { 
            result = ((result%MOD)*(base%MOD)) % MOD;
        }
        base = ((base%MOD) * (base%MOD)) % MOD;
        power = power / 2; 
    }
    return result;
}

long long modulo_multiplicative_inverse(long long A, long long M) {
    return fast_power(A, M-2, M);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int h=0,n,i,c[4];
        //scanf("%lld",&l);
        char s[1000000];
        fflush(stdin);
   
        scanf("%s\n",s);
        n=strlen(s);
        fflush(stdin);
        long long int d[n][5];
        long long int di=-1;
        char m1='0',m2='0';
      

        for(i=0;i<n;i++)
        {
            if((s[i]=='#')||(s[i]=='{')||(s[i]=='}'))
            {
                di++;
                d[di][0]=1;
                d[di][1]=1;
                d[di][2]=1;
                d[di][3]=1;
                h++;
                
            }
            else if((s[i]=='&')||(s[i]=='|')||(s[i]=='^'))
            {
                d[di][4]=s[i];
            }
            
          
            else if(s[i]==')')
            {
                if(d[di-1][4]=='&')
                {
                    //int c[4];
                    c[0]=((d[di-1][0]%mod)*(d[di][0]%mod))+((d[di-1][0]%mod)*(d[di][2]%mod))+((d[di-1][2]%mod)*(d[di][0]%mod))+((d[di-1][0]%mod)*(d[di][1]%mod))+((d[di-1][1]%mod)*(d[di][0]%mod))+((d[di-1][0]%mod)*(d[di][3]%mod))+((d[di-1][3]%mod)*(d[di][0]%mod))+((d[di-1][2]%mod)*(d[di][3]%mod))+((d[di-1][3]%mod)*(d[di][2]%mod));
                    c[1]=((d[di-1][1]%mod)*(d[di][1]%mod));
                    c[2]=((d[di-1][1]%mod)*(d[di][2]%mod))+((d[di-1][2]%mod)*(d[di][1]%mod))+((d[di-1][2]%mod)*(d[di][2]%mod));
                    c[3]=((d[di-1][1]%mod)*(d[di][3]%mod))+((d[di-1][3]%mod)*(d[di][1]%mod))+((d[di-1][3]%mod)*(d[di][3]%mod));
                    d[di-1][0]=c[0];
                    d[di-1][1]=c[1];
                    d[di-1][2]=c[2];
                    d[di-1][3]=c[3];
                    di--;
                    d[di][4]=-1;
                    
                }
                else if(d[di-1][4]=='|')
                {
                    c[1]=((d[di-1][1]%mod)*(d[di][1]%mod))+((d[di-1][1]%mod)*(d[di][2]%mod))+((d[di-1][2]%mod)*(d[di][1]%mod))+((d[di-1][0]%mod)*(d[di][1]%mod))+((d[di-1][1]%mod)*(d[di][0]%mod))+((d[di-1][1]%mod)*(d[di][3]%mod))+((d[di-1][3]%mod)*(d[di][1]%mod))+((d[di-1][2]%mod)*(d[di][3]%mod))+((d[di-1][3]%mod)*(d[di][2]%mod));
                    c[0]=((d[di-1][0]%mod)*(d[di][0]%mod));
                    c[2]=((d[di-1][0]%mod)*(d[di][2]%mod))+((d[di-1][2]%mod)*(d[di][0]%mod))+((d[di-1][2]%mod)*(d[di][2]%mod));
                    c[3]=((d[di-1][0]%mod)*(d[di][3]%mod))+((d[di-1][3]%mod)*(d[di][0]%mod))+((d[di-1][3]%mod)*(d[di][3]%mod));
                    d[di-1][0]=c[0];
                    d[di-1][1]=c[1];
                    d[di-1][2]=c[2];
                    d[di-1][3]=c[3];
                    di--;
                    d[di][4]=-1;
                }
                else if(d[di-1][4]=='^')
                {
                    c[1]=((d[di-1][1]%mod)*(d[di][0]%mod))+((d[di-1][0]%mod)*(d[di][1]%mod))+((d[di-1][2]%mod)*(d[di][3]%mod))+((d[di-1][3]%mod)*(d[di][2]%mod));
                    c[0]=((d[di-1][0]%mod)*(d[di][0]%mod))+((d[di-1][1]%mod)*(d[di][1]%mod))+((d[di-1][2]%mod)*(d[di][2]%mod))+((d[di-1][3]%mod)*(d[di][3]%mod));
                    c[2]=((d[di-1][3]%mod)*(d[di][1]%mod))+((d[di-1][1]%mod)*(d[di][3]%mod))+((d[di-1][2]%mod)*(d[di][0]%mod))+((d[di-1][0]%mod)*(d[di][2]%mod));
                    c[3]=((d[di-1][1]%mod)*(d[di][2]%mod))+((d[di-1][2]%mod)*(d[di][1]%mod))+((d[di-1][3]%mod)*(d[di][0]%mod))+((d[di-1][0]%mod)*(d[di][3]%mod));
                    d[di-1][0]=c[0];
                    d[di-1][1]=c[1];
                    d[di-1][2]=c[2];
                    d[di-1][3]=c[3];
                    di--;
                    d[di][4]=-1;
                }
            }
            
        }

        
        long long int sa;
        sa=power(4,h,mod);

        long long int r,ans0,ans1,ans2,ans3;
        r=modulo_multiplicative_inverse(sa,mod);
        ans0=(r*(d[di][0]%mod))%mod;
        ans1=(r*(d[di][1]%mod))%mod;
        ans2=(r*(d[di][2]%mod))%mod;
        ans3=(r*(d[di][3]%mod))%mod;
        
        printf("%lld %lld %lld %lld\n",ans0,ans1,ans2,ans3);
    }
}
