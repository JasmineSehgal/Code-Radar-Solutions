#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N); 
    char ch;
    scanf(" %c", &ch); 
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= i; j++) { 
            printf("%c ", '1' + j - 1); 
        }
        printf("\n"); 
    }
    return 0;
}