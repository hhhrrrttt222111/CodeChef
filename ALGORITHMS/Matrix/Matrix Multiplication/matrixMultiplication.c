#include <stdio.h>


void multiply(int m1, int m2, int mat1[][m2], int n1,
			int n2, int mat2[][n2])
{
	int x, i, j;
	int res[m1][n2];
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			res[i][j] = 0;
			for (x = 0; x < m2; x++)
			{
				*(*(res + i) + j) += *(*(mat1 + i) + x)
									* *(*(mat2 + x) + j);
			}
		}
	}
	for (i = 0; i < m1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			printf("%d ", *(*(res + i) + j));
		}
		printf("\n");
	}
}


int main()
{
	int mat1[][2] = { { 2, 4 }, { 3, 4 } };
	int mat2[][2] = { { 1, 2 }, { 1, 3 } };
	int m1 = 2, m2 = 2, n1 = 2, n2 = 2;


	multiply(m1, m2, mat1, n1, n2, mat2);
	return 0;
}
