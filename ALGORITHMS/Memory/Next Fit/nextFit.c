// C program for next fit memory management algorithm
#include <stdio.h>
#include <string.h>


void NextFit(int blocks[], int m, int datas[], int n) {
	// Stores block id of the block allocated to a
	// process
	int allocation[n], j = 0;

	// Initially no block is assigned to any process
	memset(allocation, -1, sizeof(allocation));

	// pick each process and find suitable blocks
	// according to its size ad assign to it
	for (int i = 0; i < n; i++) {

		// Do not start from beginning
		while (j < m) {

			if (blocks[j] >= datas[i]) {

				// allocate block j to p[i] process
				allocation[i] = j;

				// Reduce available memory in this block.
				blocks[j] -= datas[i];

				break;
			}

			j = (j + 1) % m;
		}
	}

    printf("\nProcess No.\tProcess Size\tBlock no.\n");
	for (int i = 0; i < n; i++) {
		printf(" %d \t\t %d \t\t", i+1, datas[i]);
		if (allocation[i] != -1)
			printf("%d", allocation[i]+1);
		else
			printf("Not Allocated");
		printf("\n");
	}
}


void main() {
	int blocks[] = { 5, 10, 20 };
	int datas[] = { 10, 20, 5 };
	int m = sizeof(blocks) / sizeof(blocks[0]);
	int n = sizeof(datas) / sizeof(datas[0]);

	NextFit(blocks, m, datas, n);

}
