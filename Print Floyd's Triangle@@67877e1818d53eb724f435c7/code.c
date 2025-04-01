#include <stdio.h>

int main() {
    int N, num = 1;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    
    return 0;
}

