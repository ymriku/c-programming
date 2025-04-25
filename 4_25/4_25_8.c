#include <stdio.h>

int main() {
    for(int i=1;i<=1;i++){// 1の段：1×1〜1×9まで表示
    for(int j=1;j<=9;j++){
        printf("%d×%d=%d\t",i,j,i*j);
    }
}
    return 0;
}