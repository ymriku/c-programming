#include <stdio.h>

int main() {
    
    int num;
    
    printf("値を入力してください。 ");
    
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}