#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Outer loop for each row
    for (int i = 1; i <= N; i++) {
        // Inner loop for printing the alternating pattern
        for (int j = 1; j <= i; j++) {
            // Alternate between 1 and 0
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        // Newline after each row
        printf("\n");
    }

    return 0;
}
