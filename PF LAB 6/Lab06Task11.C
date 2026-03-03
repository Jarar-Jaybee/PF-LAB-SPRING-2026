
#include <stdio.h>

int main() {
    double price;
    double totalBill = 0.0;
    int addMore;

    do {
        printf("Enter the price of the product: ");
        scanf("%lf", &price);
        totalBill += price;

        printf("Do you want to add another product? (1 = Yes, 0 = No): ");
        scanf("%d", &addMore);
    } while (addMore == 1);

    if (totalBill > 5000) {
        totalBill *= 0.95; 
    }

    printf("Final payable amount: %.2lf\n", totalBill);

    return 0;
}