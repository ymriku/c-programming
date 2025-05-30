//c言語の関数について
//特定の処理をまとめてプログラム
#include <stdio.h>

int add(int a, int b);    // 関数のプロトタイプ宣言
int add5(int a);

int main(void){
    printf("\n\t\t %d \n\n",add(3,5));
}

//メイン関数は、プログラム全体で最初に実行される関数
//私たちが作った関数は、すべてメイン関数で実行される


int add(int a, int b){

    return a+b;
}


//関数はリターンをかく

int add5(int a){
    a = a + 5 ;
    return a;
}

/*関数ついて
   3 int add();                          　　　　　   ↓　何かを与える
   1 int main(void){　　　　　　　　      　       ｜関　数｜
     printf("%d\n",add(1));              　          ↓　何か1つを返す
     }       ↓　→　→　→　↑
   2 int add(){                           
     return 0;                          
     }　　　　　　　　　　　　　　　　　　  
 */

 // 3 int add();     ←プロトタイプ宣言
 //    ↑　型 → returnで返す値は整数ですよ