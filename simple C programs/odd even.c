#include<stdio.h>

int evensum(int num)
{
    if(num%2==0)
    {
        int sum=0,i;
        for(i=num;i>=2;i=i-2)
        {
            sum=sum+i;
        }
       return sum;
    }
}
int oddsum(int num)
{
    int sum=0,i;
    if(num%2!=0)
    {
        for(i=num;i>=1;i=i-2)
        {
            sum=sum+i;
        }
        return sum;
    }
}
int main()
{
    int num,sum=0,i;
    printf("enter the number");
    scanf("%d",&num);
    if(num%2==0)
        printf("the even sum is%d\n",evensum(num));
    else
        printf("the odd sum is%d",oddsum(num));
    return 0;
}
