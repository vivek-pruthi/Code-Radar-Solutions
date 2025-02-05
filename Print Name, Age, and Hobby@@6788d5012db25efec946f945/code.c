#include <stdio.h>
int main(){
    char name[50];
    int age;
    char hobby[50];
    scanf("%s%s%s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %s\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}