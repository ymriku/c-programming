#include <stdio.h>
/*
int main() {
    int i = 5;
    while(i>=0){// while文で5から1までカウントダウンしよう
        printf("%d\t",i);
        i--;
    }
    return 0;
}
    */
int main() {
    int i = 5,n;
    scanf("%d",&n)
    while(i>=n){　　// while文で5からnまでカウントダウンしよう
        printf("%d\t",i);
        i--;
    }
    return 0;
}