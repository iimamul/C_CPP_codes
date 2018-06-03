#include<stdio.h>

int main()
{
    int h;
    char choice;
    printf("enter your choice");
    scanf("%c",&choice);
    if(choice=='a')
    {
        printf("enter h");
        scanf("%d",&h);
        printf("1st grade %d",10000+h*100);
    }
    else if(choice=='b')
    {
        printf("enter h");
        scanf("%d",&h);
        printf("2nd grade %d",20000+h*100);
    }
    else if(choice=='c')
    {
        printf("enter h");
        scanf("%d",&h);
        printf("3rd grade %d",30000+h*100);
    }
    else if(choice=='m')
    {
        printf("enter h");
        scanf("%d",&h);
        printf("1st grade manager %f",10000+h*100+.05*10000);
    }
    else if(choice=='n')
    {
        printf("enter h");
        scanf("%d",&h);
        printf("2nd grade manager %f",20000+h*100+.05*20000);
    }
    else if(choice=='o')
    {
        printf("enter h");
        scanf("%d",&h);
        printf("3rd grade manager %f",30000+h*100+.05*30000);
    }
    else
        printf("invalid input");
    return 0;

}
