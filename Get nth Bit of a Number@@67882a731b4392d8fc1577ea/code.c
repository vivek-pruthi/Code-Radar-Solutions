#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d%d",&a,&b);
    int bit = ((a>>b)&1);
    printf("%d\n",bit);
    return 0;
}