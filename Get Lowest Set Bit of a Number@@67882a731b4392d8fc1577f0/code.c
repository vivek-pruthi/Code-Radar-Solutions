#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    a = (1&a);
    printf("%d\n",a);
    return 0;
}