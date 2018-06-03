#include<stdio.h>

int main()
{
    int i,name[20];

    for(i=1;i<=5;i++)
    {
        printf("enter name");
        scanf("%s",name);
        printf("name is %s\n",name);
    }
}
