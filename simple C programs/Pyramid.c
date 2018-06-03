#include<stdio.h>

int main()
{
    int i,j,k,count=0,num;
    printf("\n Enter number of number you want : ");
    scanf("%d",&num);       //input number
    printf("\n");
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=(num-i);j++) //control space print
            printf("   ");

        for(k=1;k<=2*i-1;k++)      //control number print
            printf("%2d ",count=count+1);
        printf("\n");
    }
    return 0;
}
