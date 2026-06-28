//C語言課5_資料結構-變量


#include <stdio.h>
#include <stdbool.h>

int main()
{
	//字符
	char ch = 'a';//宣告一個字元變數ch，並初始化為'a'
	unsigned char uch = 'b';//宣告一個無號字元變數uch，並初始化為'b'
	
	//整型
	short sh = 1;//宣告一個短整數變數sh，並初始化為1
	int ii = 10;//宣告一個整數變數ii，並初始化為10
	long li = 100;//宣告一個長整數變數l，並初始化為100
	long long lli = 1000;//宣告一個長長整數變數ll，並初始化為1000

	//浮點
	float f = 12.5f;//宣告一個單精度浮點數變數f，並初始化為12.5，佔32位
	double d = 12.5;//宣告一個雙精度浮點數變數d，並初始化為12.5，佔64位
	long double ld = 12.5;//宣告一個長雙精度浮點數變數ld，並初始化為12.5
	printf("double浮點= %zd Bytes\n", sizeof(d));
	printf("double浮點= %zd Bits\n", sizeof(d)*8);
	printf("long double浮點= %zu Bytes\n", sizeof(ld));
	printf("long double浮點= %zu Bits\n", sizeof(ld));

	//布爾值true,flase
	bool flg = true;//宣告一個布爾變數flg，並初始化為true
	if (flg == true)
	{
		printf("布爾值flg為true\n");

	}

	if (flg == true)
	{ 
		for (int i=0; i<2;i++)
			//初始化、條件、遞增
		{
			printf("迴圈布爾值flg為true\n");
		}
	}

	/*C語言的變量語法be like :
	data_type variable_name = value;
		|			|			|
		|			|			|
	數據類型	變量名稱	   變量值*/


	/*全局、局部變量
	全局=int main以外，全程式可調用
	局部=int main內，括號內，僅在此函數內可調用
	同名時局部變量優先
	*/
	
	/*
	談談char的 signed char和unsigned char的區別：
	char=-128~127
	unsigned char=0~255
	與計算機的編碼有關
	ex,char:-1		編碼= 1000 0001，在char中128位為符號位，為1表示負數，為0表示正數
					反碼= 1111 1110，反碼+1=補碼
					補碼= 1111 1111
	
	ex,char:-128	編碼= 1000 0000，在char中128位為符號位，為1表示負數，為0表示正數
					反碼= 1111 1111，反碼+1=補碼(-128進位後卡在第八位)
					補碼= 1000 0000

	ex,unsigned char:255	編碼= 1111 1111，沒有符號位，直接表示數值，不需要反碼和補碼
		
	*/

	//常量var




    return 0;
}

