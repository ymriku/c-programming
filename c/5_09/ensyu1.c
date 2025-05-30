#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("2つの整列と演算子を入力してください　(+, -, *, /): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%dです\n", a + b);
            break;
        case '-':
            printf("%dです\n", a - b);
            break;
        case '*':
            printf("%dです\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%dです\n", a / b);
            } else {
                printf("0演算は許可されていません。\n");
            }
            break;
        default:
            printf("無効です。\n");
    }

    return 0;
}