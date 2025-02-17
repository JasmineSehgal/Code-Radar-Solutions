#include <stdio.h>
int main() {
    float x;
    scanf("%f", &x); // Added & before x
    printf("You entered: %.2f", x);
    return 0;
}