#include <stdio.h>

int main() {
    int category, type, quantity;
    int price = 0;

    printf("Book Category:\n1. Fiction\n2. Non-Fiction\n");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("1. Novel\n2. Comic\n");
            scanf("%d", &type);
            price = (type == 1) ? 600 : 300;
            break;

        case 2:
            printf("1. Biography\n2. Self-Help\n");
            scanf("%d", &type);
            price = (type == 1) ? 800 : 500;
            break;

        default:
            printf("Invalid category\n");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Total Bill: Rs. %d\n", price * quantity);
    return 0;
}
