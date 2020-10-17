#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define DEBUG 0
#if (DEBUG == 1)
#define DEBUG_PRINT printf
#else
#define DEBUG_PRINT  //
#endif

typedef unsigned char bool;
#define true	1U
#define false	0U

static unsigned int min_stop(bool* arr, unsigned int n, unsigned int x);
static unsigned int stop_cnt(unsigned int cur_pos, unsigned int target_pos, unsigned int total_sz, unsigned int hop_dist);
static bool is_co_prime(unsigned int a, unsigned int b);

int main(void) {
	unsigned int i;
	unsigned int n;
	unsigned int m;
	bool* arr;
	unsigned int min_tim;
#if 0
	{
		unsigned int a,b;

		scanf("%u %u", &a, &b);
		printf("%u\n",is_co_prime(a,b));

		return 0;
    	}
#endif
	scanf("%u %u", &n, &m);

	if(n > 0)
	{

		
		arr = (bool*)calloc((2*n), sizeof(bool));

		if(arr != NULL)
		{
			for(i=0; i<m; i++)
			{
				unsigned int pos;

				scanf("%u", &pos);
				if(pos <= n)
				{
					/* Set corresponding position */
					arr[(pos-1)] = true;
				}
				else
				{
					printf("Error..!!, invalid input..!!\n");
				}
			}
			
			DEBUG_PRINT("Inputs are: %u, %u and..\n", n, m);
			for(i=0; i<n; i++)
      {
				DEBUG_PRINT("%u ", arr[i]);
			}
			DEBUG_PRINT("\n");

			min_tim = min_stop(arr,n,m);

			printf("%u\n", min_tim);
		
			free(arr);
		}
		else
		{
			DEBUG_PRINT("Insufficient memory..!!\n");
		}
	}
	else
	{
		DEBUG_PRINT("Incorrect input..!!\n");
	}

	return 0;
}


static unsigned int min_stop(bool* arr, unsigned int n, unsigned int m)
{
	unsigned int min_stop = UINT_MAX;
	unsigned int x;
	unsigned int rem;
	unsigned int cur_stop;
	unsigned int stop_cnt;

	/* Verify for each hop distance */
	for(x = 1; x <n; x++)
	{
		rem = m;
		stop_cnt = 0;
		cur_stop = 0;
    	/* Reset the lower array */
		(void)memset(&arr[n],false,(n*sizeof(bool)));
		
		while(rem > 0)
		{
			stop_cnt++;

			/* This is a position to deliver parcel
			 * and it is not delivered yet */
			if((arr[cur_stop] == true) && (arr[n+cur_stop] == false))
			{
				arr[n+cur_stop] = true;
				rem--;
			}

			cur_stop = ((cur_stop + x) % n);

			/* Reached to the initial position */
			if(cur_stop == 0)
			{
				break;
			}
		}

		/* Not all the packets are delivered, hense this x is not a valid one,
		 * ignore and continue */
		if(rem > 0)
		{
			continue;
		}
		else
		{
			if(min_stop > stop_cnt)
			{
				min_stop = stop_cnt;
				DEBUG_PRINT("Min stop = %u, for x = %u\n", min_stop, x);
			}
		}
		
	}
  	return min_stop;
}

/* Does not count the current position:
 * Positions are 0 indexed
 * Inputs: 1, 3, 5, 4 
 * Output: 3
 * Explanation: 1->((1+4)%5)=0->(4%5)=4->(8%5)=3
 *
 * */

static unsigned int stop_cnt(unsigned int cur_pos, unsigned int target_pos, unsigned int total_sz, unsigned int hop_dist)
{
	unsigned int cur_hop_cnt = 0;

	while(cur_pos != target_pos)
	{
		cur_hop_cnt++;
		cur_pos = ((cur_pos+hop_dist)%total_sz);
	}
	
	return cur_hop_cnt;
}

static bool is_co_prime(unsigned int a, unsigned int b)
{
	bool is_co_prime = false;
	unsigned int c;

	if((a != 1) && ( b!=1 ) && ( a!= b))
	{
		if(a < b)
		{
			c = a;
			a = b;
			b = c;
		}
    while(b != 0)
		{
			c = b;
			b = a % b;
			a = c;

			if((b > a) || (b == 1))
			{
				is_co_prime = true;
				break;
			}
		}

	}

	return is_co_prime;
}
