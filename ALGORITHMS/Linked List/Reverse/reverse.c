

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int d) {
    if (head == NULL) {
        head = (struct Node *)malloc(sizeof(struct Node));
        head->data = d;
        head->next = NULL;
    }
    else {
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = d;
        temp->next = head;
        head = temp;
    }
}

void reverse() {
    struct Node *cur = head, *next = NULL, *prev = NULL;
    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}

void display() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void main() {
    int n, d, i;
    printf("Enter number of nodes\n");
    scanf("%d", &n);
    printf("Enter the values\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &d);
        insert(d);
    }
    printf("Linked list before reversing\n");
    display();
    reverse();
    printf("\nLinked list after reversing\n");
    display();
}
