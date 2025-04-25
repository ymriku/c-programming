#include <stdio.h>

int main() {
    int score;
    printf("点数を入力してください");
    scanf("%d",&score);// scoreが80以上なら「合格」と表示しよう
    if(score>=80){
        printf("合格です");
    }
    else{
        printf("不合格です");
    }
    return 0;
}