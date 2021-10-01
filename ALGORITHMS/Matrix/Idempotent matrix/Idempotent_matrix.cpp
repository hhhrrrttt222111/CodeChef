// A matrix is said to be idempotent matrix if matrix multiplied by itself return the same matrix. 
// The matrix M is said to be idempotent matrix if and only if M * M = M. 
// In idempotent matrix M is a square matrix.


#include<bits/stdc++.h>
#include<iostream>
#define N 3
using namespace std;

void multiply(int mat[][N],int res[][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            res[i][j]=0;
            for(int k=0;k<N;k++)
            {
                res[i][j]+=mat[i][k]*mat[k][j];
            }
        }
    }
}

bool checkidempotent(int mat[][N])
{
    int res[N][N];
    multiply(mat,res);
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(mat[i][j]!=res[i][j])
              return false;
        }
    }
    return true;
}

int main()
{
    int mat[N][N]={{2,-2,-4},
                   {-1,3,4},
                   {1,-2,-3}
                  };
    if(checkidempotent(mat))
    {
        cout<<"Idempotent matrix"<<endl;
    }
    else
    {
        cout<<"\n Not an idempotent matrix"<<endl;
    }
    return 0;

}
