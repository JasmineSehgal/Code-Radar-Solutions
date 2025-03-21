#include <stdio.h>
int main() {
    unsigned int num, mask, result;
    scanf("%u", &num);
    result = ~num;
    // printf("Flipped all bits: %u\n", result);
    scanf("%u", &mask);
    result = num ^ mask;
    printf("%u\n", result);
    return 0;
}