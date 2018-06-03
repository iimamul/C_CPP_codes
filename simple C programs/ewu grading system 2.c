#include<stdio.h>

int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    if(number>=97&&number<=100)
        printf("A+");
    if(number>=90&&number<=96)
        printf("A");
    if(number>=87&&number<=89)
        printf("A-");
    if(number>=83&&number<=86)
        printf("B+");
    if(number>=80&&number<=82)
        printf("B");
    if(number>=77&&number<=79)
        printf("B-");
    if(number>=73&&number<=76)
        printf("C+");
    if(number>=70&&number<=72)
        printf("C");
    if(number>=67&&number<=69)
        printf("C-");
    if(number>=63&&number<=66)
        printf("D+");
    if(number>=60&&number<=62)
        printf("D");
    if(number<60)
        printf("F");
        return 0;
}
