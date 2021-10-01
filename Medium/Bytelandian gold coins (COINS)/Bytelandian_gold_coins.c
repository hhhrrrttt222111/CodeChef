 # include <stdio.h>
 # include <stdlib.h>

long unsigned int costArray[30][19];
unsigned int amount;

unsigned int currentValue(short int factor2,short int factor3)
{ 
    int j;
    unsigned int current = amount >> factor2;
    for(j=0;j<factor3;j++)
    current /= 3;
    return current;
}

long unsigned int findOptimalAmount(short int factor2,short int factor3)
{
     unsigned int n = currentValue(factor2,factor3);
    if(n < 12)
    { 
        costArray[factor2][factor3] = n;
        return (long unsigned int)n;
    }
    else
    { 
        if(costArray[factor2][factor3] == 0)
        costArray[factor2][factor3] = (findOptimalAmount(factor2+1,factor3) + findOptimalAmount(factor2,factor3+1) + findOptimalAmount(factor2+2,factor3));
        return costArray[factor2][factor3];
    }
}

int main()
{ 
    int i,j;
    while(scanf("%d",&amount) != EOF)
    { 
        for(i=0;i<30;i++)
        for(j=0;j<19;j++)
            costArray[i][j] = 0;
        printf("%lu\n",findOptimalAmount(0,0));
    }
    return 0;
} 
