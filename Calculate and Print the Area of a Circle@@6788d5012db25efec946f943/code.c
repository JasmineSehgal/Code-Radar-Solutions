#include <stdio.h>
int main() {
    float radius, area;
    const float PI = 3.14; 
    scanf("%f %f", &radius, &area);
    area = PI * radius * radius;
    printf("Area: %.2f\n", radius, area);
    return 0;
}