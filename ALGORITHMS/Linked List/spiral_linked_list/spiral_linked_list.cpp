#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

/*
    Utility function to make linked list
*/
ListNode *makeList(int n, int arr[])
{
    ListNode *h = NULL;
    ListNode *root;
    for (int i = 0; i < n; i++)
    {
        int data = arr[i];

        ListNode *node = new ListNode(data);

        if (h == NULL)
        {
            h = node;
            root = h;
        }
        else
        {
            root->next = node;
            root = node;
        }
    }
    return h;
}

/* 
    Utitlity function to print list
*/
void print_list(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

/********************************************************************************/
// utility function to find length of list
int len(ListNode *head)
{
    int c = 0;
    while (head != NULL)
    {
        c++;
        head = head->next;
    }
    return c;
}

/*
    utility function to find mid of list
    if even list of length n : return n/2 + 1 th element
    if odd list of length n : return floor(n/2) + 1 th element
*/

ListNode *findMid(ListNode *head)
{
    ListNode *s = head, *f = head;
    while (f != NULL && f->next != NULL)
    {
        s = s->next;
        f = f->next->next;
    }
    if (f != NULL)
    {
        return s->next;
    }
    return s;
}

/* 
    Utility function to reverse the first n 
    elements in linked list
*/
ListNode *reverse(ListNode *head, int n)
{
    // Initialize current, previous and
    // next pointers
    ListNode *current = head;
    ListNode *prev = NULL, *next = NULL;

    //only first n elements
    while (n--)
    {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

/*
    Utility function to merge two lists of
    same length from given current head
*/
ListNode *merge_list(ListNode *l1, ListNode *l2)
{
    ListNode *newHead = NULL, *temp = NULL;
    while (l1 and l2)
    {
        if (newHead == NULL)
        {
            newHead = l1;
            temp = l1;
            l1 = l1->next;
            temp->next = l2;
            l2 = l2->next;
            temp = temp->next;
        }
        else
        {
            temp->next = l1;
            l1 = l1->next;
            temp = temp->next;
            temp->next = l2;
            l2 = l2->next;
            temp = temp->next;
        }
    }
    return newHead;
}

/*
    Function to create spiral linked list

    Algorithm:
    1. Find the length of linked list. 
    2. Find the mid of the element.
    3. Reverse the list from mid.
    4. Merge the reversed list and list from middle.
    5. Merged list will be the spiral linked list.

*/

ListNode *spiral_linked_list(ListNode *head)
{
    int l = len(head);

    ListNode *m = findMid(head);

    ListNode *s = reverse(head, ceil(l / 2.0));

    ListNode *mer;

    if (l % 2 == 0)
    {
        mer = merge_list(s, m);
    }
    else
    {
        mer = merge_list(s->next, m);
    }
    print_list(s);

    return NULL;
}

/*******************************************************************************/

/* 
    Driver Program
*/
int main()
{

    int n;

    n = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    ListNode *head = makeList(n, arr1);
    spiral_linked_list(head);

    n = 6;
    int arr2[] = {1, 2, 3, 4, 5, 6};
    head = makeList(n, arr2);
    spiral_linked_list(head);
}
