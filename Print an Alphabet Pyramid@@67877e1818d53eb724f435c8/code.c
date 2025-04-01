#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (char j = 'A'; j <= 'A'+i; j++) {
            printf("%ch ", j);
        }
        printf("\n");
    }
    
    return 0;
}