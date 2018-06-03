#include<stdio.h>

int main()
{
    float F,C;
    char choice,c,f;
    printf("enter your choice\n");
    scanf("%c",&choice);
    if(choice=='f')
    {
        printf("enter the celsius temperature\n");
        scanf("%f",&C);
        F=9*C/5+32;
        printf("%f",F);
    }
    else if(choice=='c')
    {
        printf("enter the fahrenheit temperature\n");
        scanf("%f",&F);
        C=5*(F-32)/9;
        printf("%f",C);
    }
    else
        printf("invalid choice");

    return 0;
}
