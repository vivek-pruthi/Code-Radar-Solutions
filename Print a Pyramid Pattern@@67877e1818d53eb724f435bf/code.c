#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i= 1;i<=n;i++){
        for(int j = i; j<=n;j++){
            printf(" ")
        }
    }
    for(int j = i; j<=2*n-1;j++){
            printf("*");
        }
    return 0;
}
