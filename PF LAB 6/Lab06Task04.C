#include <stdio.h>

int main() {
    int num;
    int sum = 0;
        printf("enter number");
        scanf("%d", &num);

    for (int i = 0; i <= num; i++){
        sum = sum + i;
       
    }
    printf("sum = %d", sum);
    
}