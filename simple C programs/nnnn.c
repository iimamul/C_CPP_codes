#include<stdio.h>

int main()
{
    int choice,h;
    printf("enter your choice");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("enter the number of overtime hour");
        scanf("%d",&h);
        printf("salary of 1st grade employee is %d",10000+h*100);
    }

    else
    {
        if(choice==11)
        {
            printf("enter h");
            scanf("%d",&h);
            printf("salary of 1st grade manager is %f",10000+h*100+.05*10000);
        }

        else
        {
            if(choice==2)
            {
                printf("enter h");
                scanf("%d",&h);
                printf("salary of 2nd grade employee is %d",20000+h*100);
            }

            else
            {
                if(choice==22)
                {
                    printf("enter h");
                    scanf("%d",&h);
                    printf("salary of 2nd grade manager is %f",20000+h*100+.05*20000);
                }

                else
                {
                    if(choice==3)
                    {
                        printf("enter h");
                        scanf("%d",&h);
                        printf("salary of 3rd grade employee is %d",30000+h*100);
                    }

                    else
                    {
                        if(choice==33)
                        {
                            printf("enter h");
                            scanf("%d",&h);
                            printf("salary of 3rd grade manager is %f",30000+h*100+.05*30000);
                        }

                        else
                            printf("invalid input");
                            return 0;
                    }
                }
            }
        }
    }
}
