#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
    char ch;
    scanf(" %c", &ch); 
    for (int i = 1; i <= n; i++) { 
        for (int j = 0; j < i; j++) { 
            printf("%c ", 'A' + j - 1); 
        }
        printf("\n"); 
    }
    return 0;
}