#include <stdio.h>
int main(){
    int a,b,c;
    char op;
    scanf("%d %d %d",&a, &b, &c);
    scanf("%c",&op);
    switch (op){
        case '+' :
            c = a + b;
            printf("%d",c);
            break;
        case '-' :
            c = a - b;
            printf("%d",c);
            break;
        case '*' :
            c = a * b;
            printf("%d",c);
            break;
        case '/' :
            c = a / b;
            printf("%d",c);
            break;
            
            }
            return 0;
}