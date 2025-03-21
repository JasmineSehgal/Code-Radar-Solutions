#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
    char ch;
    scanf(" %c", &ch); 
    for (int i = 1; i <= n; i++) { // Outer loop for the number of rows
        for (int j = 0; j < i; j++) { // Inner loop for printing characters
            printf("%c ", ch + j); // Print the current character based on the starting character and the offset
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}