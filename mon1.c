#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter two integers and an operator (+, -, *, /): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}