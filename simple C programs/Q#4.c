#include<stdio.h>

int pairnum(int number)
{
    int digit[3],i;

    for(i=2;i>=0;i--)
    {
        digit[i]=number%10;
        number=number/10;
    }
    if(digit[2]==digit[0]+digit[1])
        return 1;
    else
        return 0;
}
int main()
{
    int number,x;
    printf("enter a 3 digit number");
    scanf("%d",&number);
    x=pairnum(number);
    if(x==1)
        printf("it's a pair number");
    else
        printf("it's not a pair number");

    return 0;
}
