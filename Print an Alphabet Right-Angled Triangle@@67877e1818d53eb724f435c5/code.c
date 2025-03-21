#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char ch;
    scanf("%c",&ch);
    for (int i = 1; i <= n; i++) {
        for (int i = 1; i <= n; i++) {
            printf("%c",ch);
        }
        
        printf("\n");
    }
    return 0;
}