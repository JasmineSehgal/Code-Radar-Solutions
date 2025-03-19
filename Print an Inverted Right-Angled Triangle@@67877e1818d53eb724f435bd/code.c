#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j--+) {
            printf("* "); // Print asterisk followed by a space
        }
        printf("\n"); // Move to the next line after printing all asterisks for the current row
    }
    
    return 0;
}