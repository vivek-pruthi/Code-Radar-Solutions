#include <stdio.h>

int main() {
    int N;
    
    // Read the number of rows
    scanf("%d", &N);
    
    // Generate the palindromic triangle with proper alignment
    for (int i = 1; i <= N; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        // Print the increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Print the decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}

