#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i <= N; i++) {
        printf("%d", i);
        if (i < N) {
            printf(" "); 
        }
    }
    
    printf("\n");
    return 0;
}