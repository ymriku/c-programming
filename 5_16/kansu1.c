#include <stdio.h>

float chohokei (float tate,float yoko);    //最初に宣言

int main(void){
    float menseki=chohokei(5.0,3.0);// 呼び出し

    printf("%f\n",menseki);　　//ここが3番目に実行される
    
    return 0 ;

}

float chohokei (float tate,float yoko){   

    float menseki;　　　　　　　　　　　　　//ここが先に実行される　（2番目に実行）

    menseki= tate * yoko;

    return menseki;

}

