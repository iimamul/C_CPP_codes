#include<stdio.h>

int main()
{
    int choice;
    float h,b,r,area_t,area_c,pi=3.142;
    printf("enter your choice 0 for triangle and 1 for cirlce: ");
    scanf("%d",&choice);
    if(choice==0)
    {
        printf("enter the triangle height: ");
        scanf("%f",&h);
        printf("enter the base: ");
        scanf("%f",&b);
        area_t=.5*b*h;
        printf("area of triangle is%f",area_t);
    }
   else if(choice==1)
    {
        printf("enter the radius of circle: ");
        scanf("%f",&r);
        area_c=pi*r*r;
        printf("area of circle is: %f",area_c);
    }
    else
        printf("error");
    return 0;

}
