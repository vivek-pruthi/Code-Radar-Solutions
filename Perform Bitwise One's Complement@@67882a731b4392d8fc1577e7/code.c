#include <stdio.h>


int main() {
     int a;
    scanf("%d",&a);
    if(a){
        printf("%d", ~a);
    }
    else{
        printf("%d");
    }
    return 0;
}