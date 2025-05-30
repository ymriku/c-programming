#include<stdio.h>

int add(int a, int b) {
    return a + b;
}
int main(void){
    int sum = add(3, 5); 
    printf("3 + 5 = %d\n", sum);
    return 0;
}