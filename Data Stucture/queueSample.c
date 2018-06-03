#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
}*front,*rear,*temp,*front1;


void create();
int frontelement();
void enqueue(int data);
void dequeue();
void empty();
void display();
void queueSize();



int count = 0;

void main()
{
    int no, ch, felement;

    printf("\n 1 - Enque");
    printf("\n 2 - Deque");
    printf("\n 3 - Front Element");
    printf("\n 4 - Empty Queue");
    printf("\n 5 - Queue size");
    printf("\n 6 - Display");
    printf("\n 7 - Exit");
    create();
    while (1)
    {
        printf("\n Enter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            enqueue(no);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            felement= frontelement();
            if (felement != 0)
                printf("Front element is : %d", felement);
            else
                printf("\n No front element in Queue ");
            break;

        case 4:
            empty();
            break;
        case 5:
            queueSize();
            break;
        case 6:
            display();
            break;

        case 7:
            exit(0);

        default:
            printf("Wrong choice!! Enter Your Choice Correctly   ");
            break;
        }
    }
}

/* Create an empty queue */
void create()
{
    front = rear = NULL;
}

/* Returns queue size */
void queueSize()
{
    printf("\n Queue size : %d", count);
}

/* Enqueing the queue */
void enqueue(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(sizeof(struct node));
        rear->next = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(sizeof(struct node));
        rear->next = temp;
        temp->info = data;
        temp->next = NULL;

        rear = temp;
    }
    count++;
}

/* Displaying the queue elements */
void display()
{
    front1 = front;

    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->next;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}

/* Dequeing the queue */
void dequeue()
{
    front1 = front;

    if (front1 == NULL)
    {
        printf("\n Error !!! The Queue Is Empty ");
        return;
    }
    else
        if (front1->next != NULL)
        {
            front1 = front1->next;
            printf("\n Dequed value is : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value is : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}

/* Returns the front element of queue */
int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}

/* Display if queue is empty or not */
void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue is empty");
    else
       printf("Queue is  not empty");
}
