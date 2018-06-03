#include<stdio.h>

int main()
{
    int i,max,n,marks,sum=0;
    printf("enter the number of students");
    scanf("%d",&n);
    max=0;
    for(i=1;i<=n;i++)
    {
        printf("enter %d no. student marks ",i);
        scanf("%d",&marks);
        if(marks>max)
            max=marks;
        if(marks<max)
            sum++;
    }
    printf("the highest marks is %d and %d student got the highest marks",max,sum);
    return 0;
}
