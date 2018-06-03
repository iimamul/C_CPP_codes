#include<stdio.h>

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
void SearchData(int x)
{
    curr=head->next;

    while(curr!=NULL)
    {
        if(curr->data=x)
            break;
        else
            curr=curr->bnext;
        Search_report=1;
    }
    if(curr==NULL)
    {
        printf("/n No data %d exists ...  ",x);
        Search_report=0;
    }

};
void IsertNodeAtMiddle (int dta)
{
    SearchData(dta);
    while(curr!=NULL)
    {
        if(curr->data==dta)
            break;
        else
            curr=curr->bnext;
    }
    AllocateNode(dta);
    head->count++;
}

void RemoveNode (int data)
{
    SearchData(data);

    if(Search_report=0)
    {
        printf("/n No data %d exists ...  ",data);
    }

    if(Search_report=1)curr->bnext==NULL;
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
        printf("\n Node is created and the data inside is :%d \n",curr->data);
        printf("\n %d \n",head->count);
        curr=curr->bnext;
    }

}
int main()
{
    int sdata;
    head=( struct head_node *) malloc(sizeof(struct head_node));
    head->count=0;
    head->next=NULL;

    AllocateNode(100);

    head->next=temp;
    head->count++;

    IsertNodeAtStart(10);
    IsertNodeAtEnd(200);
    IsertNodeAtMiddle(10);

    PrintNode ();

    printf("\n Enter a data u want to remove : ");
    scanf("%d",&sdata);

    RemoveNode (sdata);
    PrintNode ();

    return 0;
}
