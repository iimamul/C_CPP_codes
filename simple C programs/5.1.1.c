#include<stdio.h>

int main()
{
    int number,remainder;
    printf("enter the number");
    scanf("%d",&number);
    remainder=number%2;
    if(remainder==0)
        printf("NUMBER IS EVEN");
    if(remainder>0)
        printf("NUMBER IS ODD");
    return 0;
}
