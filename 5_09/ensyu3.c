#include<stdio.h>

  int main(){
  int N,i,s=0;
  printf("正の整数を入力してください\t");
  scanf("%d",&N);
  for(i=0;i<=N;i++){
    s += i  ;
  }
  printf("合計は%dです\t",s);
  return 0;
}
