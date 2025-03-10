#include <stdio.h>

int main() {
    char N;
    scanf("%c", &N); // Read the number of rows

    for (char i = 1; i <= N; i++) { // Loop for rows in reverse order
        for (char j = 1; j <= i; j++) { // Loop for numbers in each row
            printf("%c ", j);
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}
