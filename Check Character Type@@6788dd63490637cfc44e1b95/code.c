#include <stdio.h>
int main(){
    char ch;
    scanf("%s",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel\n");
        }
    else if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("Consonant\n");

    }
    else if (isdigit(ch))
    {
        printf("Digit/n");
    }
    else {
        printf("Special Character/n")
    }
    return 0;

}

