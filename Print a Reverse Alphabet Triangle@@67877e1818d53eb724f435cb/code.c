#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Outer loop for each row
    for (int i = N; i >= 1; i--) {
        // Inner loop for printing characters in each row
        for (int j = 1; j <= i; j++) {
            // Printing the alphabet starting from 'A'
            printf("%c", 'A' + j - 1);
        }
        // Newline after each row
        printf("\n");
    }

    return 0;
}
