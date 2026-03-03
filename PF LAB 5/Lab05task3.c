#include <stdio.h>

int main() {
    int mainType, subType;
    float weight, rate = 0;

    printf("Enter luggage weight (kg): ");
    scanf("%f", &weight);

    printf("Main Luggage Type:\n");
    printf("1. Handbag\n2. Checked Bag\n3. Sports Equipment\n");
    scanf("%d", &mainType);

    switch (mainType) {
        case 1:
            printf("1. Small\n2. Large\n");
            scanf("%d", &subType);
            switch (subType) {
                case 1: rate = 100; break;
                case 2: rate = 200; break;
                default: printf("Invalid option\n"); return 0;
            }
            break;

        case 2:
            printf("1. Domestic\n2. International\n");
            scanf("%d", &subType);
            switch (subType) {
                case 1: rate = 300; break;
                case 2: rate = 500; break;
                default: printf("Invalid option\n"); return 0;
            }
            break;

        case 3:
            rate = 1000;
            break;

        default:
            printf("Invalid luggage type\n");
            return 0;
    }

    printf("Total Luggage Fee: Rs. %.2f\n", rate * weight);
    return 0;
}
