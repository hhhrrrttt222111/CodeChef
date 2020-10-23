#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iostream>
#include <utility>
#include <set>
#include <map>
#include <cstring>
#include <queue>

using namespace std;

char C[10][10];
int avail[10][10], K;
bool ok[10][10], found;
int tmp[100][10][10];

void nhap()
{
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
        {
            C[i][j]=getchar();
        }
        scanf("\n");
    }
}

int getbit(int mask, int i)
{
    return ((mask>>(i-1))&1);
}

int batbit(int mask, int i)
{
    return (mask|(1<<(i-1)));
}

int tatbit(int mask, int i)
{
    return (mask&(~(1<<(i-1))));
}

int countbit(int mask)
{
    int res = 0;
    for(int i=1; i<=9; i++)
        res+=getbit(mask,i);
    return res;
}

void prep()
{
    memset(ok,0,sizeof(ok));
    memset(avail,0,sizeof(avail));
    K=0;
    for(int i=1; i<=9; i++)
        for(int j=1; j<=9; j++)
        {
            if (C[i][j]=='.')
            {
                K++;
                avail[i][j]=(1<<9)-1;
                for(int k=1; k<=9; k++)
                {
                    if (C[i][k]!='.')
                        avail[i][j]=tatbit(avail[i][j],C[i][k]-'0');
                    if (C[k][j]!='.')
                        avail[i][j]=tatbit(avail[i][j],C[k][j]-'0');
                }
                if (i-j==0)
                {
                    for(int k=1; k<=9; k++)
                    {
                        if (C[k][k]!='.')
                            avail[i][j]=tatbit(avail[i][j],C[k][k]-'0');
                    }
                }
                if (i+j==10)
                {
                    for(int k=1; k<=9; k++)
                    {
                        if (C[k][10-k]!='.')
                            avail[i][j]=tatbit(avail[i][j],C[k][10-k]-'0');
                    }
                }
                int sx = ((i-1)/3)*3, sy = ((j-1)/3)*3;
                //printf("%d %d %d %d\n",i,j,sx,sy);
                for(int ii=1; ii<=3; ii++)
                    for(int jj=1; jj<=3; jj++)
                    if (C[sx+ii][sy+jj]!='.')
                        avail[i][j]=tatbit(avail[i][j],C[sx+ii][sy+jj]-'0');
            } else ok[i][j]=1;
        }
}

void bo(int x, int y, int b)
{
    for(int k=1; k<=9; k++)
    {
        if (!ok[x][k])
            avail[x][k]=tatbit(avail[x][k],b);
        if (!ok[k][y])
            avail[k][y]=tatbit(avail[k][y],b);
    }

    if (x-y==0)
    {
        for(int k=1; k<=9; k++)
        {
            if (!ok[k][k])
                avail[k][k]=tatbit(avail[k][k],b);
        }
    }

    if (x+y==10)
    {
        for(int k=1; k<=9; k++)
        {
            if (!ok[k][10-k])
                avail[k][10-k]=tatbit(avail[k][10-k],b);
        }
    }

    int sx = ((x-1)/3)*3, sy = ((y-1)/3)*3;
    for(int ii=1; ii<=3; ii++)
        for(int jj=1; jj<=3; jj++)
        if (!ok[sx+ii][sy+jj])
            avail[sx+ii][sy+jj]=tatbit(avail[sx+ii][sy+jj],b);
}

void duyet(int k)
{
    if (k==K+1)
    {
        found=1;
        /*for(int i=1; i<=9; i++)
        {
            for(int j=1; j<=9; j++)
                printf("%c",C[i][j]);
            printf("\n");
        }
        printf("\n");*/
        return;
    }
    for(int i=1; i<=9; i++)
        for(int j=1; j<=9; j++)
            tmp[k][i][j]=avail[i][j];
    int rem = (1<<9)-1, sx=-1, sy=-1;
    for(int i=1; i<=9; i++)
        for(int j=1; j<=9; j++)
        if ((!ok[i][j])&&countbit(avail[i][j])<countbit(rem))
        {
            if (countbit(avail[i][j])==0)
                return;
            sx=i; sy=j;
            rem=avail[i][j];
        }
    //printf("%d %d %d %d\n",sx,sy,rem,ok[sx][sy]);
    if (sx==-1)
        return;
    for(int b=1; b<=9; b++)
    if (getbit(rem,b)==1)
    {
        C[sx][sy]=b+'0';
        ok[sx][sy]=1;
        bo(sx,sy,b);
        duyet(k+1);
        if (found)
            return;
        for(int i=1; i<=9; i++)
            for(int j=1; j<=9; j++)
                avail[i][j]=tmp[k][i][j];
        ok[sx][sy]=0;
        C[sx][sy]='.';
    }
}

int main()
{
	//freopen("A.inp","r",stdin); //freopen("","w",stdout);
	//cout<<countbit((1<<9)-1)<<endl;
    int T; scanf("%d",&T);
    while(T)
    {
        T--;
        scanf("\n");
        nhap();
        prep();
        found = 0;
        duyet(1);
        //printf("%d\n",avail[4][4]);
        for(int i=1; i<=9; i++)
        {
            for(int j=1; j<=9; j++)
                printf("%c",C[i][j]);
            printf("\n");
        }
        printf("\n");
    }
	fclose(stdin); fclose(stdout);
	return 0;
}


