#include <stdio.h>
int main(){
    int a,b,c,i,N;
    scanf("%d",&N);
    a = 0;
    b = 1; 
    c = 0;
    for (i = 1; i <= N; i++){
        printf("%d",c);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}