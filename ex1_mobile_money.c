
//ARIHO BECKHAM
//25/U/BIE/01360/PE
#include<stdio.h>
int main(){
    float amount_to_send, total_deducted, fee_amount, fee_percentage;
    fee_percentage=1.5;

    printf("enter amount to send");
    scanf("%f",&amount_to_send);
    
    fee_amount=(fee_percentage/100)*amount_to_send;
    total_deducted=amount_to_send+fee_amount;
    printf("fee_amount:%.2f\n",&fee_amount);
    printf("total_amount_deducted:%.2f\n",&total_deducted);
    return 0;
}
