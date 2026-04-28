#include <stdio.h>
#include <stdlib.h>
// structure for queue node
struct node
{
    int data;
    struct node *next;
};
struct node *front = null;
struct node *rear = null;
// enqueue operation
void enqueue()
{
    int item;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == null)
    {
        printf(“heap overflow!\n”);
        return;
    }
    printf(“enter element to insert: “);
    scanf(“%d”, &item);
    newnode->data = item;
    newnode->next = null;
    if (rear == null)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    printf(“element inserted successfully.\n”);
}
// dequeue operation
void dequeue()
{
    struct node *temp;
    if (front == null)
    {
        printf(“queue underflow!\n”);
        return;
    }
    temp = front;
    printf(“deleted element: %d\n”, temp->data);
    front = front->next;
    if (front == null)
    rear = null;
    free(temp);
}
// display queue elements
void display()
{
    struct node *temp;
    if (front == null)
    {
        printf(“queue is empty.\n”);
        return;
    }
    printf(“queue elements:\n”);
    temp = front;
    while (temp != null)
    {
        printf(“%d “, temp->data);
        temp = temp->next;
    }
    printf(“\n”);
}
int main()
{
    int choice;
    do
    {
        printf(“\n--- queue menu ---\n”);
        printf(“1. enqueue\n2. dequeue\n3. display\n4. exit\n”);
        printf(“enter your choice: “);
        scanf(“%d”, &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf(“exiting program.\n”);
            break;
        default:
            printf(“invalid choice!\n”);
        }
    } while (choice != 4);

    return 0;
}
