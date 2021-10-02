#include<stdio.h>
#include<string.h>
#include<ctype.h>


#define SIZE 26


void display(char hash[SIZE][30]) { 
    printf("\n");
    printf("Index\t");
    printf("\tValue\n");
    
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t\t", i);
        
        if(hash[i][0]=='0')
            printf("-");
        else
            printf("%s",hash[i]);
        
        printf("\n");
    }    
}


void linearProbing(char hash1[SIZE][30], char key[][30],int n,char word[30]) {
    int i, h, index, count=0, flag=0;                                                  
    for(int k=0; k<n; k++) {
        index = ((tolower(key[k][0]) - 97) % SIZE);
        i = (index+1) % SIZE;
        
        if(hash1[index][0]=='0') {
            strcpy(hash1[index],key[k]);
        }
        else {
            while(i!=index) {
                if(hash1[i][0]=='0') {
                    strcpy(hash1[i],key[k]);
                    break;
                } 
                i = (i+1) % SIZE;
            }
            if(i==index) {
                break;
            }  
        }
    }

    printf("\nLinear Probing :\n");
    display(hash1);                                  

    
    index = ((tolower(word[0]) - 97) % SIZE);
    i = (index+1) % SIZE;                                           
        
    if(strcmpi(hash1[index],word)==0) {
        printf("\nWord found at index: %d", index);
        printf("\nNo. of Key Comparisons made: %d", count);
        
    }
    else {
        while(i!=index) {
            ++count;
            if(hash1[i][0]=='0') {
                break;
            } 
            else if(strcmpi(hash1[i],word)==0) {
                printf("\nWord found at index: %d", i);
                printf("\nNo. of Key Comparisons made: %d", count);
                flag = 1;
                break;
            }
            i = (i+1) % SIZE;
        }

        if(flag==0) {
            printf("\nWord not found.");
            printf("\nNo. of Key Comparisons made: %d",count);
        }         
    }         
}


void quadraticProbing(char hash2[SIZE][30], char key[][30], int n, char word[30]) {
    int i, h, index, count=0, flag=0;

    for(int k=0;k<n;k++) {
        index = ((tolower(key[k][0]) - 97) % SIZE);
        i = (index+1) % SIZE;
        
        if(hash2[index][0]=='0') {
            strcpy(hash2[index],key[k]);
        }
        else {
            for(int j=2;i!=index;j++) {
                if(hash2[i][0]=='0') {
                    strcpy(hash2[i],key[k]);
                    break;
                } 
                i = (index+j*j) % SIZE;
            }
            
        }
    }

    printf("\n\nQuadratic Probing :\n");
    display(hash2);                                                                            

    
    index = ((tolower(word[0]) - 97) % SIZE);
    i = (index+1) % SIZE;                                           
        
    if(strcmpi(hash2[index], word) == 0) {
        printf("\nWord found at index: %d", index);
        printf("\nNo. of Key Comparisons made: %d", count);
        
    }
    else {
        for(int j=2; i!=index; j++) {
            ++count;
            if(hash2[i][0]=='0') {
                break;
            }
            
            else if(strcmpi(hash2[i], word)==0) {
                printf("\nWord found at index: %d", i);
                printf("\nNo. of Key Comparisons : %d", count);
                flag = 1;
                break;
            } 
            i = (index+j*j) % SIZE;
        }

        if(flag==0) {
            printf("\nWord not found.");
            printf("\nNo. of Key Comparisons : %d", count);
        }
              
    }       
           
}

void main() {
    char hash1[SIZE][30], hash2[SIZE][30], arr[30][30], word[30];
    int n=0;                                                                                     

    printf("\nEnter the Number of words: ");                                                       
    scanf("%d", &n);

    printf("\nEnter the Text:\n");
    for(int i=0; i<n; i++){
        scanf("%s", &arr[i]);
    }
          
    for(int i=0; i<SIZE; i++) {
        for(int j=0; j<SIZE; j++) {
            hash1[i][j] = '0';
            hash2[i][j] = '0';
        }
    }

    printf("\nEnter the word to searched: ");
    scanf("%s", &word);

    linearProbing(hash1, arr, n, word);  
    quadraticProbing(hash2, arr, n, word);  
}
