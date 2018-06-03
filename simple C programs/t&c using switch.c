#include<stdio.h>

int main()
{
    int choice;
    float h,b,r;
    printf("Enter your choice, for triangle enter 0 and for circle enter 1 :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 0:
            printf("enter the height of triangle :");
            scanf("%f",&h);
            printf("enter the base of triangle :");
            scanf("%f",&b);
            printf("area of triangle is :%f",.5*b*h);
            break;
        case 1:
            printf("enter the radius of circle :");
            scanf("%f",&r);
            printf("area of circle is :%f",3.1416*r*r);
            break;
        default:
            printf("invalid choice");
            break;
    }
    return 0;
}
