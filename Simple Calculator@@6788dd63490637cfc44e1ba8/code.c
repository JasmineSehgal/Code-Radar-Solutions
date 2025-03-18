##include <stdio.h>

int main() {
    int a, b, c;
    char op;
    int valid = 1; // Flag to check if the operation was valid

    // Read two integers and an operator
    scanf("%d %d", &a, &b);
    scanf(" %c", &op); 

    switch (op) {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            if (b != 0) {
                c = a / b;
            } else {
                printf("error\n"); 
                valid = 0; // Set valid to 0 if division by zero occurs
            }
            break;
        default:
            printf("error\n");
            valid = 0; // Set valid to 0 for invalid operator
            break;
    }

    // Print the result only if the operation was valid
    if (valid) {
        printf("%d\n", c);
    }

    return 0;
}