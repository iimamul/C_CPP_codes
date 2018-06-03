#include<stdio.h>

int main()
{
    float r,area_c,h,b,area_t;
    char choice,c,t;
    printf("enter c for circle and t for triangle\n");
    scanf("%c",&choice);
    if(choice=='c')
    {
        printf("enter the radius of circle\n");
        scanf("%f",&r);
        area_c=3.1416*r*r;
        printf("the area of circle is%f",area_c);
    }
    else if(choice=='t')
    {
        printf("enter the height of triangle\n");
        scanf("%f",&h);
        printf("enter the base of triangle\n");
        scanf("%f",&b);
        area_t=.5*h*b;
        printf("the area of triangle is%f",area_t);
    }
    else
        printf("invalid choice");
    return 0;

}
