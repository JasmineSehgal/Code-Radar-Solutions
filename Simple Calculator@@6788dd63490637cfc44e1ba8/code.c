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
                // Set c to a specific value to indicate an error
                printf("error"); // You can choose any value to indicate an error
            }
            break;
        default:
            printf("error"); // Handle invalid operator case
            break;
    }

    // Output the result
    // You can use this line to check the value of c in your testing
    printf("%d\n", c); // This line can be kept to display the result

    return 0;
}