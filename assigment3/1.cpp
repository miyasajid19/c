/*
For any character entered through keyboard check whether the entered character is
capital letter, small letter, a digit or special symbol
*/
#include <stdio.h>
#include <ctype.h>

int main() {
	top:
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isupper(ch))
        printf("%c is a capital letter.\n", ch);
    else if (islower(ch))
        printf("%c is a small letter.\n", ch);
    else if (isdigit(ch))
        printf("%c is a digit.\n", ch);
    else if (!isalnum(ch))
        printf("%c is a special symbol.\n", ch);
    else
        printf("%c is an invalid character.\n", ch);
goto top;
    return 0;
}
