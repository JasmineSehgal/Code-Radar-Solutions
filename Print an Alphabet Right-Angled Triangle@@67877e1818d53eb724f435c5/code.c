#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char ch;
    scanf("%c",&ch);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c",ch);
            ch++;
            if (ch >= 'Z'){
               ch = 'A';
            }
        }
        
        printf("\n");
    }
    return 0;
}