#include <stdio.h>

int main(void){

int num;

printf("整数を入力してください。\n");
scanf("%d", &num);

if (num%2 == 1){
printf("奇数\n");
}else{
printf("偶数\n");
}

return 0;
}