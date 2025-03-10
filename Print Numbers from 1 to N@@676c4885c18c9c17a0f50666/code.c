#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i <= N; i++){
        for (int j = 0: i<=N ; j--){
            printf("%d", j);
            if (j < N) {
            printf(" "); 
        }
        }
    } {
        printf("%d", i);
        if (i < N) {
            printf(" "); 
        }
    }
    
    printf("\n");
    return 0;
}