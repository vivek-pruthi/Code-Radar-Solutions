#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of rows

    for (int i = 1; i <= N; i++) { // Loop for rows in reverse order
        for (char j = 'A'; j <= 'A' + i; j++) { // Loop for numbers in each row
            printf("%c ", j);
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}
