#include<stdio.h>

int main()
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    if(number>=97){
        printf("the grade is A+");
    else
    {
        if(number>=90)
            printf("the grade is A");
        else
        {
            if(number>=87)
                printf("the grade is A-");
            else
            {
                if(number>=83)
                    printf("the grade is B+");
                else
                {
                    if(number>=80)
                        printf("the grade is B");
                    else
                    {
                        if(number>=77)
                            printf("the grade is B-");
                        else
                        {
                            if(number>=73)
                                printf("the grade is C+");
                            else
                            {
                                if(number>=70)
                                    printf("the grade is C");
                                    else
                                {
                                    if(number>=67)
                                        printf("the grade is C-");
                                    else
                                    {
                                        if(number>=63)
                                            printf("the grade is D+");
                                        else
                                        {
                                            if(number>=60)
                                                printf("the grade is D");
                                            else
                                            {
                                                if(number<60)
                                                    printf("the grade is F");
                                                else
                                                    printf("Error");
                                                    return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    }
}
