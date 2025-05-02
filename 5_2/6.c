#include <stdio.h>
/*
int main()   {
    int i,n,s=0
   scanf("%d",&n);
    for(int i=1;i<=n;i++){ // for文で1からnまでを出力しよう
    s=i+s;
   } 
   printf("%d\t",s);
    return 0;
}
    
   int main()   {
    int i,n,
   scanf("%d",&n);
    for(int i=1;i<=n;i++){ // for文で1からnまでを出力しよう
    printf("%d\t",i);
   } 
    return 0;
}

   int main() {
    int i

    for(i=0;i<=10;i++){
        printf("%d\t",i);
    }
    return 0;
}
    */
   int main() {
    int i,n,s=0
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2){// for文で偶数を出力しよう
        s=i+s;
    }
    printf("%d/t",s);
    
    return 0;
}