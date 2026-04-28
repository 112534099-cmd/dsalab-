  #include <stdio.h>
#define max 5
int queue[max];
int front = -1, rear = -1;
// insert element (enqueue)
void enqueue()
{
    int item;
    if (rear == max – 1)
    {
        printf(“queue overflow!\n”);
        return;
    }
    printf(“enter element to insert: “);
    scanf(“%d”, &item);
    if (front == -1)
        front = 0;
    queue[++rear] = item;
    printf(“element inserted successfully.\n”);
}
// delete element (dequeue)
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf(“queue underflow!\n”);
        return;
    }
    printf(“deleted element: %d\n”, queue[front++]);
}
// display queue elements
void display()
{
    if (front == -1 || front > rear)
    {
        printf(“queue is empty.\n”);
        return;
    }
    printf(“queue elements:\n”);
    for (int i = front; i <= rear; i++)
        printf(“%d “, queue[i]);
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
