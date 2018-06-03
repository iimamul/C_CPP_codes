#include<stdio.h>

int main()
{
    float x,y,r1,r2,r3;
    printf("enter x");
    scanf("%f",&x);
    printf("enter y");
    scanf("%f",&y);
    r1=(x+y)/(x-y);
    r2=(x+y)/2;
    r3=(x+y)*(x-y);
    printf("r1:%f,r2:%f,r3:%f",r1,r2,r3);
    return 0;
}
