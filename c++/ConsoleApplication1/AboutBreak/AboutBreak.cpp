// AboutBreak.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

int main()
{   //題目:找到第一個1~100能被3整除的數，用breakl;
    int n;
    for (n = 1;n<=100;n++) {
        if (n%3==-0) {
            printf("第一個被3整除的數為%d", n);
            break;
        }
    }
    //另一個continue;將會跳脫單次循環直接跳到新循環，continue後代碼不執行並反覆循環
    //題目，找到1~100之間所有能被3整除的數字，用continue;
    //可以寫反判斷
    int i;
    for (i = 1;i <= 100;i++) {
        if (i%3!=0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");






    return 0;
}
