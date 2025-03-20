#include <stdio.h>
int main() {
    int decimalNumber;
    int binary[32]; 
    int index = 0;
    scanf("%d", &decimalNumber);
    if (decimalNumber == 0) {
        printf("0\n");
        return 0;
    }
    while (decimalNumber > 0) {
        binary[index] = decimalNumber % 2; 
        decimalNumber = decimalNumber / 2;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}