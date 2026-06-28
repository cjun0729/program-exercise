// DataStructure2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdbool.h>

int main()
{
    //int a = 10;局部變量，存於棧(棧存)區
    //數據類型轉換問題
	float f = 12.5f;
    int a = f;
    //浮點給到整型char
    //'正在初始化': 將 'float' 轉換為 'int'，由於類型不同，可能導致資料遺失
    printf(" %.2f\n", f);
	printf(" % d\n", a);    //12.5f轉換為整型，資料遺失，變為12

    //強制轉換float to int，不是非常安全
	int b = (int)f;
    printf(" %.2f\n", f);
	printf(" % d\n", a);//強轉不會改變結果,仍會丟失數據,結果為12
 
	//Byte小轉大不須要強轉,大轉小須強轉
    short s = 10;//2Bytes
	int c = s;//4Bytes，signed最大值=32bits=2^31-1

    //大轉小數據溢出
    int d = 32768;
    short sd = d;
	printf(" % d\n", sd);//32768超過short最大值32767，溢出，結果為-32768

    

    return 0;
}

