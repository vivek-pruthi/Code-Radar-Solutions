// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of rows

    for (int i = N; i >= 1; i--) { // Loop for rows in reverse order
        for (int j = 1; j <= i; j++) { // Loop for numbers in each row
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}
