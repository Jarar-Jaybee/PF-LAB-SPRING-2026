/*3)Sir. Talha Shahid ask you to write you a program which can help him in storing your quiz marks for pass students
within range [5-10] will be stored, consider there are 10 students registered in Section BDS-1A. He wants an another
array of same size where marks for failed students within range [0-5] are stored. Write a program for the given
scenario. You program should exit if user enters -1 and will display the marks entered along with average of each
array.*/

#include <stdio.h>

int main() {
    int passMarks[10], failMarks[10];
    int passCount = 0, failCount = 0;
    int mark, i;
    float passAverage = 0, failAverage = 0;

    
    printf("Enter quiz marks for 10 students (enter -1 to stop): ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &mark);
        if (mark == -1) {
            break;
        }
        if (mark >= 5 && mark <= 10) {
            passMarks[passCount++] = mark;
            passAverage += mark;
        } else if (mark >= 0 && mark < 5) {
            failMarks[failCount++] = mark;
            failAverage += mark;
        } else {
            printf("Invalid mark entered. Please enter a mark between 0 and 10.\n");
            i--; 
        }
    }

    
    if (passCount > 0) {
        passAverage /= passCount;
    }
    if (failCount > 0) {
        failAverage /= failCount;
    }

    
    printf("Passed students' marks: ");
    for (i = 0; i < passCount; i++) {
        printf("%d ", passMarks[i]);
    }
    printf("\nAverage of passed students' marks: %.2f\n", passAverage);

    printf("Failed students' marks: ");
    for (i = 0; i < failCount; i++) {
        printf("%d ", failMarks[i]);
    }
    printf("\nAverage of failed students' marks: %.2f\n", failAverage);
    
    return 0;
}