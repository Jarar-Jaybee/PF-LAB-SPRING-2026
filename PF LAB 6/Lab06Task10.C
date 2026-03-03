
#include <stdio.h>

int main() {
    int score;
    int distinctionCount = 0;
    int passCount = 0;
    int failCount = 0;

    printf("Enter student scores (enter -1 to stop):\n");

    while (1) {
        printf("Enter score: ");
        scanf("%d", &score);

        if (score == -1) {
            break;
        }

        if (score >= 75) {
            distinctionCount++;
        } else if (score >= 50 && score < 75) {
            passCount++;
        } else if (score < 50 && score >= 0) {
            failCount++;
        } else {
            printf("Invalid score. Please enter a score between 0 and 100.\n");
        }
    }

    printf("\nResults:\n");
    printf("Distinction: %d students\n", distinctionCount);
    printf("Pass: %d students\n", passCount);
    printf("Fail: %d students\n", failCount);

    return 0;
}