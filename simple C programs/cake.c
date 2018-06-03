#include<stdio.h>

int main(){
    int guest;
    float length_of_cake,size_of_cake,size_of_piece;
    printf("enter the number of guest");
    scanf("%d",&guest);
    printf("enter the length of cake");
    scanf("%f",&length_of_cake);
    size_of_cake=length_of_cake*length_of_cake;
    size_of_piece=size_of_cake/guest;
    printf("size of piece%f",size_of_piece);
    return 0;
    }
