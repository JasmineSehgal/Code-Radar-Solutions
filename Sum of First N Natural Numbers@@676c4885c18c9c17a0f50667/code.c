#include <stdio.h>
int main(){
    int N;
    int sum = 0;
    scanf("%d",&N);
    for(int i = 0; i <= N ; i++){
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}
// #include <stdio.h>
// int main(){
//     int n, sum = 0, lastdigit = 0;
//     scanf("%d",&n);
//     while(n != 0){
//         lastdigit = n%10;  // Get last digit
//         sum = sum + lastdigit;  // Add to sum
//         n = n/10;  // Remove last digit
//     }
//     printf("%d",sum);  // Prints sum of digits
//     return 0;
// }