#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (char j = 'A'; j <= 'A'+i-1; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }
    
    return 0;
}