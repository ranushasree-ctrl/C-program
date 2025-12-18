#include <stdio.h>
#include <ctype.h>   // for isalpha(), isdigit()

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0;
    int i;


    fgets(str, sizeof(str), stdin);  // Read string including spaces

    for(i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // convert to lowercase

        if (isdigit(ch)) {
            digits++;
        }
        else if (isalpha(ch)) {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}

