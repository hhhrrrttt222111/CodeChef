#include <stdio.h>
#include <string.h>

int main(void) 
{
    // your code goes here
	int i,c,l,n,t,j;
    char s[1001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        if(l%2==0)
            n=l/2;
        else
            n=l/2+1;
        c=0;
        i=0;
        while(i<l/2)
        {
            j=n;
            while(j<l)
            {
                if(s[i]==s[j])
                {
                    c++;
                    s[j]=0;
                    break;
                }
                j++;
            }
            i++;
        }
        if(c==l/2)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}

