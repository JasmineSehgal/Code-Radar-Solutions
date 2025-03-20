#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        if (i == 1 || i == a) {
            // Print full row of asterisks for the first and last row
            for (int j = 1; j <= a; j++) {
                printf("*");
            }
        } else {
            // Print hollow row for the middle row
            printf("*"); // Print the first asterisk
            for (int j = 2; j < a; j++) {
                printf(" "); // Print spaces in between
            }
            printf("*"); // Print the last asterisk
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}