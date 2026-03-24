
//ARIHO BECKHAM
//25/U/BIE/01360/PE
#include<stdio.h>
int main(){
    #include <stdio.h>
    float amount, fee_percent, fee, total;

    printf("Enter amount to send: ");
    scanf("%f", &amount);

    printf("Enter transaction fee (%%): ");
    scanf("%f", &fee_percent);

    fee = (fee_percent / 100) * amount;
    total = amount + fee;

    printf("\nTransaction fee: %.2f UGX\n", fee);
    printf("Total deducted: %.2f UGX\n", total);
    return 0;
}
