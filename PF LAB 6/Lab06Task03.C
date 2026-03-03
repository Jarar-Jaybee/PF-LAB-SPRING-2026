#include <stdio.h>

int main(){

    int pass= 1234;
    int input = 0;

    do{
        printf("Enter password: ");
        scanf("%d", &input);
        if (input != pass){
            printf("Incorrect password, try again.\n");
        }
    } while (input != pass);

    printf("Password is correct !");
}