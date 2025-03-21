#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num); 
    int flipped = ~num;
    printf("%d", num);
    printf("%d", flipped);

    return 0;
}