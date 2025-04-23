#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);  // use fgets if you want to include spaces

    // Step 1: Find the length of the string
    while(str[length] != '\0') {
        length++;
    }

    // Step 2: Compare characters from start and end
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Step 3: Print result
    if(isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
