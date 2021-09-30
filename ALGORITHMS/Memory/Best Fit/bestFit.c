// Best - Fit algorithm
#include <stdio.h>
#include <string.h>


void bestFit(int blocks[], int b, int datas[], int d) {

	int allocate[d];

	memset(allocate, -1, sizeof(allocate));

	for (int i=0; i<d; i++) {
		int index=-1;
		for (int j=0; j<b; j++) {
			if (blocks[j] >= datas[i]) {
				if (index == -1)
					index = j;
				else if (blocks[index] > blocks[j])
					index = j;
			}
		}

		if (index != -1) {
			allocate[i] = index;
			blocks[index] -= datas[i];
		}
	}

    printf("\nProcess No.\tProcess Size\tBlock no.\n");
	for (int i=0; i<d; i++) {
		printf("%d \t\t %d \t\t", i + 1, datas[i]);
		if (allocate[i] != -1)
			printf("%d", allocate[i]+1);
		else
			printf("Not Allocated");
		printf("\n");
	}
}


void main() {
	int blocks[20], datas[20];
	int b, d;

	printf("Enter no. of memory blocks: ");
	scanf("%d", &b);
	printf("Memory blocks: ");
	for(int i=0; i<b; i++)
		scanf("%d", &blocks[i]);

	printf("\nEnter no. of data blocks: ");
	scanf("%d", &d);
	printf("Enter datas: ");
	for(int i=0; i<d; i++)
		scanf("%d", &datas[i]);

	bestFit(blocks, b, datas, d);

}
