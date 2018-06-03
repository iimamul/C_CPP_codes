#include<stdio.h>

int main()
{
    float u,a,distance,t;
    printf("enter u");
    scanf("%f",&u);
    printf("enter a");
    scanf("%f",&a);
    printf("enter t");
    scanf("%f",&t);
    distance=u*t+(a*t*t)/2;
    printf("distance%f\n",distance);
    return 0;
}
