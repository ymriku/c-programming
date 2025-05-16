#include <stdio.h>

float tasu(float a,float b);

float hiki(float a,float b);

float kake(float a,float b);

int main(void){
    int mode;
    float a,b,n;
    printf("モードを選択してください。1:+ 2:- 3:*\n");

    scanf("%d",&mode);

    printf("1つ目の値を入力してください。\n");
    scanf("%f",&a);

    printf("2つ目の値を入力してください。\n");
    scanf("%f",&b);
    
    
    if( mode == 1 ){
    n = tasu (a,b);
    }
    
    else if (mode == 2){
    n = hiki(a,b);
    
    }

    else if(mode==3){
    n = kake(a,b);
    }

    else{
        printf(" error\n");
    }

    printf("答えは%fです。\n",n);

    return 0;

}

float tasu(float a,float b){

    return a+b;

}
 float hiki(float a,float b){
    
    return a-b;

 }


 float kake(float a,float b){

    return a*b;

 }