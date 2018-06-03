#include<stdio.h>

int main()
{
    int h,choice;
    printf("enter 1 for 1st grade, 2 for 2nd, 3 for 3rd, 4 for 1st grade manager,5 for 2nd, 6 for third");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("enter the number of overtime hours");
            scanf("%d",&h);
            printf("salary of 1st grade employee is%d",10000+h*100);
            break;
        case 2:
            printf("enter the number of overtime hours");
            scanf("%d",&h);
            printf("salary of 2nd grade employee is%d",20000+h*100);
            break;
        case 3:
            printf("enter the number of overtime hours");
            scanf("%d",&h);
            printf("salary of 3rd grade employee is%d",30000+h*100);
            break;
        case 4:
            printf("enter the number of overtime hours");
            scanf("%d",&h);
            printf("salary of 1st grade manager is%f",10000+h*100+.05*10000);
            break;
        case 5:
            printf("enter the number of overtime hours");
            scanf("%d",&h);
            printf("salary of 2nd grade manager is%f",20000+h*100+.05*20000);
            break;
        case 6:
            printf("enter the number of overtime hours");
            scanf("%d",&h);
            printf("salary of 3rd grade manager is%f",30000+h*100+.05*30000);
            break;
    }
    return 0;
}
