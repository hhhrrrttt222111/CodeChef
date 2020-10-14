#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,t;
	scanf("%d",&t);
	while(t--)
	{
		char s[10000];
		int flag=0,count=0,j;
		scanf("%s",s);
		for(i=1;s[i]!='\0';i++)
		{flag=0;
			for(j=0;j<i-1;j++)
			{
				if(s[j]==s[i-1] && s[j+1]==s[i])
				{
					flag=1;
					break;
				}
			}
			if(flag!=1)
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}