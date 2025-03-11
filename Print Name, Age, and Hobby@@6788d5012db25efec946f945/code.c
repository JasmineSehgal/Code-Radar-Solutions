#include <stdio.h>
int main(){
    char s[100];
    int age;
    char s1[100];
    scanf("%s %d %s",&s,&age,&s1);
    printf("%s %d %s\n",s, age,s1);
    printf("Name: %s\n",s);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",s1);
    return 0;
}