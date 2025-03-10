#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if( n>0){
        for (int i = 0 ; i >= n ; i++){
            printf("%d", i);
            if (i > n) {
            printf(" "); 
        }
        }
    
    }
    else {
        for (int i = 0 ; i <= n ; i--){
            printf("%d", i);
            if (i < n) {
            printf(" "); 
    }
}
    }
    printf("\n");
    return 0;
}