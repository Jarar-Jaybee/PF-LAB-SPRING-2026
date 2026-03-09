/*2)Write a program that reads the 10 numbers from user and store these numbers into an array of same size. You
program should provide a searching mechanism in such a way that how many times a particular number occurred
and then print it on screen. If number is not in array, then program should display a message “number not found”.*/

#include <stdio.h>

int main() {
    int arr[10], num, count = 0, i;

    
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter a number to search: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    if (count > 0) {
        printf("Number %d occurred %d times.\n", num, count);
    } else {
        printf("Number not found.\n");
    }
    
    return 0;
}