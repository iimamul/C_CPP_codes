#include<stdio.h>

void main()
{
int i=2,n;
float fact=1;

printf("\t\t\tFactorial of n\n\nEnter n:");
scanf("%d",&n);
while(i<=n)
{
fact=fact*i;
++i;
}
printf("\n\n\t\t\t%d! = %.0f",n,fact);
}
