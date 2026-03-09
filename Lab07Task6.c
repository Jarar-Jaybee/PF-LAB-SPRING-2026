/*6)You are assisting your English language teacher who wants to analyze how many vowels and consonants appear in
students’ submitted words. Write a program that reads a single word using scanf(&quot;%s&quot;, str); and counts the number
of vowels and consonants in it without using any string library functions like strlen(). The program should then
display both counts on the screen.*/
#include <stdio.h>
int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    
    printf("Enter a word: ");
    scanf("%s", str);

    
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

    
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    
    return 0;
}