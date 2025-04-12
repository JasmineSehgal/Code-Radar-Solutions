// #include <stdio.h>
// int main(){
//     int N;
//     int sum = 0;
//     scanf("%d",&N);
//     for(int i = 0; i <= N ; i++){
//         sum = sum + i;
//     }
//     printf("%d",sum);
//     return 0;
// }
#include <stdio.h>
int main(){
    int n, sum = 0, lastdigit = 0;
    scanf("%d",&n);
    while(n != 0){
        lastdigit = n%10;
        sum = sum + lastdigit;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}