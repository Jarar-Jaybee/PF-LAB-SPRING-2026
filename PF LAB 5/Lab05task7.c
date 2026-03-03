#include <stdio.h>

int main() {
    int enteredCard, enteredPin;
    int storedCard = 12345;   
    int storedPin  =  2345;    

    float balance = 20000, amount;

    printf("Enter Card Number: ");
    scanf("%d", &enteredCard);

    if (enteredCard == storedCard) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == storedPin) {
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if (amount <= balance) {
                balance -= amount;
                printf("\nTransaction Successful");
                printf("\nRemaining Balance: Rs %.2f\n", balance);
            } else {
                printf("\nInsufficient Funds\n");
            }
        } else {
            printf("\nInvalid PIN\n");
        }
    } else {
        printf("\nInvalid Card\n");
    }

    return 0;
}
