#include <stduio.h>
int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    if (a && b < 0){
        printf("True");
    }
    else {
        printf("false");
    }
    return 0;
}