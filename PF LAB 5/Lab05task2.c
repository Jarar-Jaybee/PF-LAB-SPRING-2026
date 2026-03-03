#include <stdio.h>

int main() {
    float dataUsed, bill = 0;
    int customerType;

    printf("Enter data used (GB): ");
    scanf("%f", &dataUsed);

    if (dataUsed <= 2) {
        bill = dataUsed * 50;
    }
    else if (dataUsed > 2 && dataUsed <= 10) {
        printf("Customer Type (1 = Prepaid, 2 = Postpaid): ");
        scanf("%d", &customerType);

        if (customerType == 1) {
            bill = dataUsed * 40;
        } else if (customerType == 2) {
            bill = dataUsed * 35;
        }
    }
    else {
        bill = dataUsed * 25;
    }

    printf("Total Bill: Rs. %.2f\n", bill);

    return 0;
}
