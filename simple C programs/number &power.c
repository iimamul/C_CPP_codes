#include<stdio.h>

int main()
{
    int n,p,i,value=1;
    printf("enter the number :");
    scanf("%d",&n);
    printf("enter the power :");
    scanf("%d",&p);
        for(i=0;i<=p;i=i+1)
        {
            value=value*n;
        }
        printf("the value is :%d",value);
    return 0;
}
