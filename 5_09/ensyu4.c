#include<stdio.h>

int main(){
    int N;
    printf("値を入力してください\t");
    scanf("%d",&N);
    
    int A=0,R=0,next;
    for(int i=1;i<=N;i++){
        printf("%d",A);
        next= A + R ;    
        A = R;
        R = next;
    }

    printf("\n");

    return 0;
}