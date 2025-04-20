#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // use fgets for full sentences

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if character is a vowel
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check if character is a digit
        else if(ch >= '0' && ch <= '9') {
            digits++;
        }
        // Check if character is a consonant (a-z or A-Z but not a vowel)
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}
