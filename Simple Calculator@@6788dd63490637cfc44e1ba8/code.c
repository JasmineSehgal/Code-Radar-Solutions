#include <stdio.h>

int main() {
    int a, b, c;
    char op;

    // Read two integers and an operator
    scanf("%d %d", &a, &b);
    scanf(" %c", &op); // Note the space before %c to consume any leftover newline character

    // Perform the operation based on the operator
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
                c = 0; // You can set c to 0 or handle it differently if needed
            }
            break;
        default:
            c = 0; // Handle invalid operator case
            break;
    }

    // Output the result
    printf("%d\n", c); // This line can be kept to display the result

    return 0;
}