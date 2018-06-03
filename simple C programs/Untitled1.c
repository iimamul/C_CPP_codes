#include<stdio.h>

int main()
{
    int answer,count;

    for(count=1; count<11; count++)
    {
        printf("what is %d + %d?",count,count);
        scanf("%d",&answer);
        if(answer==count+count) printf("right");
        else
        {
            printf("sorry, you are wrong");
            printf("the answer is  %d ",count+count);
        }
    }
    return 0;
}
