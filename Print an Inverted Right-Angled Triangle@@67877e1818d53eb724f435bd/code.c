#include <stdio.h>
int main() {
    int N;
    
    printf("Enter the height of the triangle: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}