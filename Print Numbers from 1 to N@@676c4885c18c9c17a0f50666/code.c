// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if( n>0){
//         for (int i = 0 ; i >= n ; i++){
//             printf("%d", i);
//             if (i > n) {
//             printf(" "); 
//         }
//         }
    
//     }
//     else {
//         for (int i = 0 ; i <= n ; i--){
//             printf("%d", i);
//             if (i < n) {
//             printf(" "); 
//     }
// }
//     }
//     printf("\n");
//     return 0;
// }
#include <stdio.h>

int main() {
    int N;

    // Read the input
    scanf("%d", &N);

    // Check if N is positive or negative
    if (N > 0) {
        // Print numbers from 1 to N
        for (int i = 1; i <= N; i++) {
            printf("%d", i);
            if (i < N) {
                printf(" "); // Print space between numbers
            }
        }
    } else {
        // Print numbers from 1 to N (negative case)
        for (int i = 1; i >= N; i--) {
            printf("%d", i);
            if (i > N) {
                printf(" "); // Print space between numbers
            }
        }
    }

    printf("\n"); // New line at the end
    return 0;
}
