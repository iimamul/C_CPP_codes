#include<stdio.h>

int main()
{
    int choice;
    float h,b,r;
    printf("enter your choice, 0 for triangle and 1 for circle :");
    scanf("%d",&choice);
    switch (choice)
{
    case 0:
        printf("enter the triangle height :");
        scanf("%f",&h);
        printf("enter the triangle base :");
        scanf("%f",&b);
        printf("Area of triangle is :%f",.5*h*b);
        break;
    case 1:
        printf("enter the radius of circle :");
        scanf("%f",&r);
        printf("Area of circle is :%f",3.1416*r*r);
        break;
    default:
        printf("invalid input");
        break;
}
    return 0;

}
