#include <stdio.h>
#include <stdlib.h>

struct body_node
{
    int data;
    struct node *bnext;
} *temp,*curr,*precurr;

struct head_node
{
    int count;
    struct body_node *next;
} *head;

int Search_report;

void CreateNode();
void AllocateNode(int d);
void SearchData(int x);
void IsertNodeAtStart (int data);
void IsertNodeAtMiddle (int data,int x);
void IsertNodeAtEnd (int data);
void DeleteNode (int data);
void PrintNode ();
void NodeNumber ();


void main()
{
    int dta,d,chois;

    printf("\n\t\t\t *** LINKED LIST ***\n\n");
    printf("\n\t 1 - Insert at start");
    printf("\n\t 2 - Insert at middle");
    printf("\n\t 3 - Insert at end");
    printf("\n\t 4 - Delet node");
    printf("\n\t 5 - Show nodes");
    printf("\n\t 6 - Total nodes");
    printf("\n\t 7- Exit");



    CreateNode();

    while (1)
    {
        printf("\n\n Enter Your Choice : ");
        scanf("%d", &chois);
        switch (chois)
        {
        case 1:
            printf("\n Enter the data you want to insert : ");
            scanf("%d", &dta);
            IsertNodeAtStart (dta);
            break;
        case 2:
            printf("\nEnter the data you want to insert : ");
            scanf("%d", &dta);
            printf("\nEnter the data after which you want to insert %d : ",dta);
            scanf("%d", &d);
            IsertNodeAtMiddle ( dta,d);
            break;
        case 3:
            printf("\n Enter the data you want to insert : ");
            scanf("%d", &dta);
            IsertNodeAtEnd ( dta);
            break;
        case 4:
            printf("\n Enter the data you want to remove : ");
            scanf("%d", &dta);
            DeleteNode (dta);
            break;
        case 5:
            PrintNode();
            break;
        case 6:
            NodeNumber();
            break;
        case 7:
            exit(0);

        default:
            printf("\n Wrong choice!!! Re Enter Your Choice Correctly...   ");
            break;
        }
    }
}

void CreateNode()
{
     head=( struct head_node *) malloc(sizeof(struct head_node));
     head->count=0;
     head->next=NULL;
}

void AllocateNode(int d)
{
    temp=( struct body_node *) malloc(sizeof(struct body_node));
    temp->data=d;
    temp->bnext=NULL;
}

void IsertNodeAtStart (int data)
{
    AllocateNode(data);

    temp->bnext=head->next;
    head->next=temp;
    head->count++;
}

void IsertNodeAtEnd (int data)
{
    AllocateNode(data);

    curr=head->next;

    while(curr-> bnext!=NULL)
        curr=curr->bnext;

    curr-> bnext=temp;
    head->count++;
}

void IsertNodeAtMiddle (int data,int x)
{
    SearchData(x);

    if(Search_report==1)
    {
        AllocateNode(data);
        temp->bnext=curr->bnext;
        curr->bnext=temp;
        head->count++;
    }
    if(Search_report==0)
        printf("\n No data %d exists ...  ",x);
}

void SearchData(int x)
{
    curr=head->next;

    while(curr!=NULL)
    {
        if(curr->data==x)
        {
            Search_report=1;
            break;
        }
        else
        {
            Search_report=0;
            curr=curr->bnext;
        }
    }

   // if(curr==NULL)

}

void DeleteNode (int data)
{
    SearchData(data);

    if(Search_report==0)
        printf("/n No data %d exists ...  ",data);


    if(Search_report==1)curr->bnext==NULL;
    {
        //from 1st...
        if(head->next==curr)
            head->next=curr->bnext;
        //from middle...
        else
        {
            precurr=head->next;
            while(precurr->bnext!=curr)
                precurr=precurr->bnext;
            precurr->bnext=curr->bnext;
        }
        free(curr);
        head->count--;
    }
}

void PrintNode ()
{
    curr=head->next;
    while(curr!=NULL)
    {
        printf("\n Data :%d \n",curr->data);
        curr=curr->bnext;
    }
}

void NodeNumber ()
{
    printf("\n Total %d nodes exists...\n",head->count);
}


