#include <stdio.h>
int countTrailingZeros(int num) {
    int count = 0;
    if (num == 0) {
        return -1; 
    }
    while ((num & 1) == 0) { 
        count++;
        num >>= 1; 
    }
    return count;
}
int main() {
    int number;
    scanf("%d", &number);
    int trailingZeros = countTrailingZeros(number);
    if (trailingZeros == -1) {
        printf();
    } else {
        printf("%d", number);
    }
    return 0;
}