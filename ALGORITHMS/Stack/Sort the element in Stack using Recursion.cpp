#include <iostream>
using namespace std;

struct stack
{
int data;
struct stack* next;
};

void initStack(struct stack** s)
{
*s = NULL;
}

int isEmpty(struct stack* s)
{
if (s == NULL)

{
return 1;
}

return 0;
}

void push(struct stack** s, int x)
{
struct stack* p = (struct stack*)malloc(sizeof(*p));

if (p == NULL)
{
// fprintf(stderr, "Memory allocation failed.");
cout << "Memory allocation failed.";
cout << endl;
return;
}

p->data = x;
p->next = *s;
*s = p;

}

int pop(struct stack** s)
{
int x;
struct stack* temp;

x = (*s)->data;
temp = *s;
(*s) = (*s)->next;
free(temp);

return x;
}

int top(struct stack* s)
{
return (s->data);
}

void sortedInsert(struct stack** s, int x)
{

if (isEmpty(*s) or x > top(*s))
{
push(s, x);
return;
}

int temp = pop(s);
sortedInsert(s, x);

// Put back the top item removed earlier
push(s, temp);
}

void sortStack(struct stack** s)
{
// If stack is not empty
if (!isEmpty(*s))
{
// Remove the top item
int x = pop(s);

// Sort remaining stack
sortStack(s);

// Push the top item back in sorted stack
sortedInsert(s, x);
}
}

void printStack(struct stack* s)
{
while (s)
{
cout << s->data << " ";
s = s->next;
}

cout << endl;
}

int main(void)
{

struct stack* top;

initStack(&top);
push(&top, 30);
push(&top, -5);
push(&top, 18);
push(&top, 14);
push(&top, -3);

cout << "Stack elements before sorting: ";
printStack(top);

sortStack(&top);
cout << endl;

cout << "Stack elements after sorting: ";
printStack(top);
cout << endl;

return 0;
}
