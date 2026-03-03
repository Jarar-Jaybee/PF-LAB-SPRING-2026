
#include <stdio.h>

int main() {
    int N;
    int totalDecorativeItems = 0;

    printf("Enter the number of boxes: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        totalDecorativeItems += i; 
    }

    printf("Total number of decorative items required: %d\n", totalDecorativeItems);

    return 0;
}

// this is just the same logic as the sum of nat nums