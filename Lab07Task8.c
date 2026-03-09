/*8)Write a program that reads a string using scanf(&quot;%[^A-Za-z]&quot;, str); so that it accepts all but only stores all characters
except alphabets. The program should then display the entered non-alphabetic characters on the screen. using 1d arrays*/

#include <stdio.h>  
int main() {
    char str[100];
    int i;

    
    printf("Enter a string: ");
    scanf("%[^A-Za-z]", str);

    
    printf("Non-alphabetic characters: ");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}