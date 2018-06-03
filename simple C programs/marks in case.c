#include<stdio.h>

int main()
{
    int index,marks;
    printf("enter the marks");
    scanf("%d",&marks);
    index=marks/10;
    switch(index)
    {
        case 10:
        case 9:
        case 8:
            printf("Honours");
            break;
        case 7:
        case 6:
            printf("First Division");
            break;
        case 5:
            printf("Second Division");
            break;
        case 4:
            printf("Third Division");
            break;
        default:
            printf("Fail");
    }
        return 0;
}
