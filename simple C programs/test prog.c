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
            printf("honours");
            break;
        case 7:
        case 6:
            printf("first division");
            break;
        case 5:
            printf("second division");
            break;
        case 4:
            printf("third division");
            break;
        default:
            printf("fail");
    }
    return 0;
}
