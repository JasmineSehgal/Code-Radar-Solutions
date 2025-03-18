#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    if (a == a){
        printf("Equal");
    }
    else if (a > b){
        printf("First");
    }
    else{
        printf("Second");
    }
    return 0;
}