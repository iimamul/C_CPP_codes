#include<stdio.h>

struct body_node
{
    int data;
    struct node *next;
} *temp,*curr;

struct head_node
{
    int count;
    struct body_node *point;
} *head;

int Search_report;

void allocateNode(int d)
{
    temp=( struct body_node *) malloc(sizeof(struct body_node));
    temp->data=d;
    temp->next=NULL;
}

void push(int d)
{
    allocateNode(d);
    temp->next=head->point;
    head->point=temp;
    head->count++;
}

void pop()
{
    curr=head->point;
    head->point=curr->next;
    free(curr);
    head->count--;
}

void checkEmpty()
{
    if(head->point!=NULL)
        printf("Stack is not empty");
}

void PrintNode ()
{
    printf("*********************************************");
    curr=head->point;
    while(curr!=NULL)
    {

        printf("\n Node is created and the data inside is :%d \n",curr->data);
        printf("\n %d \n",head->count);
        curr=curr->next;
    }
}

void checkTop()
{
    printf("top item data of the list is %d\n",head->point->data);
}

void checkData()
{
    int i,p;
    printf("Enter the position of data u want to know: ");
    scanf("%d",&p);
    curr=head->point;
    if(p>head->count)
        printf("Out of bound");
    else
    {
        for(i=1; ; i++)
        {
            if(i==p)
            {
                printf("in %d position the data is %d",p,curr->data);
                break;
            }
            curr=curr->next;
        }
    }

}


int main()
{
    int sdata;
    head=( struct head_node *) malloc(sizeof(struct head_node));
    head->count=0;
    head->point=NULL;

    allocateNode(11);

    head->point=temp;
    head->count++;
    push(22);
    push(33);
    push(44);
    PrintNode ();

    pop();

    PrintNode ();
    checkEmpty();

    checkTop();

    checkData();
    return 0;
}
