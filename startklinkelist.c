#include <stdio.h>
#include <stdlib.h>
// Structure for stack node
struct node
{
int data;
struct node *next;
};
struct node *top = NULL;
// Push operation
void push()
{
int item;
struct node *newNode;
newNode = (struct node *)malloc(sizeof(struct node));
if (newNode == NULL)
{
printf("Heap Overflow!\n");
return;
}
printf("Enter element to push: ");
scanf("%d", &item);
newNode->data = item;
newNode->next = top;
top = newNode;
printf("Element pushed successfully.\n");
}
// Pop operation
void pop()
{
struct node *temp;
if (top == NULL)
{
printf("Stack Underflow!\n");
return;
}
temp = top;
printf("Popped element: %d\n", temp->data);
top = temp->next;
free(temp);
}
// Display stack
void display()
{
struct node *temp;
if (top == NULL)
{
printf("Stack is empty.\n");
return;
}
printf("Stack elements:\n");
temp = top;
while (temp != NULL)
{
printf("%d\n", temp->data);
temp = temp->next;
}
}
int main()
{
int choice;
do
{
printf("\n--- Stack Menu ---\n");
printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
printf("Exiting program.\n");
break;
default:
printf("Invalid choice!\n");
}
} while (choice != 4);
return 0;
}
