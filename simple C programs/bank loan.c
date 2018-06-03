#include<stdio.h>

int main(){
    float total_amount,loan,interest,total_amount_to_be_paid;
    printf("enter the total amount of money");
    scanf("%f",&total_amount);
    loan=0.2*total_amount;
    interest=0.02*loan;
    total_amount_to_be_paid=loan+interest;
    printf("total amount to be paid by the user%f",total_amount_to_be_paid);
    return 0;
    }
