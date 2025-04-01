#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        // Print numbers in increasing order
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d", j);
        }
        
        printf("\n");
    }
    
    return 0;
}