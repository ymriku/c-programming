#include <stdio.h>
/*
int main() {
    int scores[5] = {90, 80, 70, 60, 50};
    for(int i=0;i<5;i++){
        printf("%d\n",scores[i]);// for文を使ってscoresの中身を出力しよう
    }
    return 0;
}
    */
   int main() {
    int i,n;
    scanf("%d",n);
    int scores[n] = {90, 80, 70, 60, 50};
    for(i=0;i<5;i++){
        printf("%d\n",scores[i]);  // for文を使ってscoresの中身を出力しよう
    }
    return 0;
}