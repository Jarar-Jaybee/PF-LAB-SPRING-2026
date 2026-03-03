#include <stdio.h>

int main() {
    int balance = 2000;
    int amount;
    
    while (balance > 0){
        printf("enter amount to withdraw ");
        scanf("%d", &amount);
        balance = balance - amount;
    }
    
    if (balance < 0){
        printf("insufficient funds");
    }
    
    if (balance == 0){
        printf("balance is zero");
    }
}
