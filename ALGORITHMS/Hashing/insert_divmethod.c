#include<stdio.h>

#define SIZE 13


void insert(int hash[], int key[], int n) {
    int i, index;
    for(int k=0; k<n; k++) {
        index = key[k] % SIZE;   
        i = (index+1) % SIZE;

        if(hash[index] == -1) {
            hash[index] = key[k];
        }
        else {
            while(i!=index) {
                if(hash[i] == -1) {
                    hash[i] = key[k];
                    break;
                } 
                i = (i+1) % SIZE;
            }
            if(i==index) {
                break;
            }  
        }
    }
    
}


void display(int hash[]) {
    printf("\n\nHash Table:\n");
    
    printf("\nIndex:\t");
    for(int i=0; i<SIZE; i++)
        printf("%d\t",i);
    
    printf("\nValue:\t");
    for(int i=0; i<SIZE; i++) {
        if(hash[i]==-1)
            printf("-\t");
        else
            printf("%d\t", hash[i]);
    }
}


void main() {
    int HASH[SIZE], n;         

    printf("\nEnter the Number of Keys: ");
    scanf("%d", &n);
    int arr[n];          
    
    printf("\nEnter the Keys:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    for(int i=0; i<SIZE; i++) 
        HASH[i] = -1;

    insert(HASH, arr ,n);

    display(HASH);    
}
