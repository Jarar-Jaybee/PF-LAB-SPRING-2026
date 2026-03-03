#include <stdio.h>

int main() {
    int temperature = 0;
    int avgtemp = 0;
    int totaltemp = 0;
    int count = 0;

    while (temperature != -999)
    {
        printf("enter temperature in celsius ");
        scanf("%d", &temperature);
        count++;
        totaltemp = totaltemp + temperature;
        avgtemp = totaltemp / count;


    }
    printf("average temperature = %d", avgtemp);
    
    
}