#include <stdio.h>

int main() {
    double a;
    printf("Enter a decimal number: ");
    scanf("%lf", &a);
    printf("Default precision: %lf\n", a);
    printf("Two decimal places: %.2lf\n", a);
    printf("Five decimal places: %.5lf\n", a);
    return 0;
}
