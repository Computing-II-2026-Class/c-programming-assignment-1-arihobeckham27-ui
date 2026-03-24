//ARIHO BECKHAM 
//25/U/BIE/01360/PE

#include <stdio.h>

int main() {
    int units;
    float cost_per_unit, total_bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);

    total_bill = units * cost_per_unit;

    printf("\nTotal bill: %.2f UGX\n", total_bill);

    return 0;
}
