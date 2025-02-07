#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int bit = (a & -a);
    printf("%d\n",bit);
    return 0;
}