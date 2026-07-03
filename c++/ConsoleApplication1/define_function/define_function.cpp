#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
//自定義函數，matlab也有，但要另存一個檔案
	//ret_type function_name(arg_name) {}，包含4個部分，返回值類型，函數名，參數列表，函數體，define a function
	//題目:寫一個函數，其為數字的加總
int sum(int a, int b) {
	int ans = a + b;
	printf("sum函數調用完成");
	return a + b;
}
//after u write a fuction;相當於有了一個自己的全局變量

//寫一個算階乘的
int fac(int n) {
	int ans = 1;
	for (int i = 1; i <= n;i++) {
		ans = ans * i;

	}
	return ans;//最終傳達啥出去給main
}
//自訂函數中的變量叫做形參，main中叫實參
// 形參不會創建新的數組，但是兩個操作的是同一個數組aka同個ram的位置
// 形參中arr可以是arr[]也可以是arr
//-------------------------------------------------------


//-------------------------------------------------------

//寫一個函數，判斷閏年
int is_leap_year(int year) {
	int leap_year = 0;
	if (year%4==0&&year%100!=0 ||year%400==0) {
		leap_year = 1;//可直接return 1;，但為了方便理解，先定義一個變量
	
	}
	else {
		leap_year = 0;
	}
	return leap_year;
}
//-------------------------------------------------------
//static
void no_sta() {//無輸入，調用就執行
	int a = 0;
	a++;
	printf("%d ", a);

}
void sta() {//無輸入，調用就執行
	static int a = 0;
	a++;
	printf("%d ", a);

}

extern int ext;//extern是外部變量，這個變量在其他地方定義過了，這裡只是引用它
//由外部文件ex:XXX.c or XXX.cpp中定義的變量，extern int ext;，這裡只是引用它，可以用於多個文件之間的變量共享，像是金鑰


//the defination can't be used before main()
int main()
{
	//內部的調用
	int x = 1;//資料結構相同於定義
	int y = 2;
	//sum(x, y);//調用函數，傳入參數，返回值沒有接收
	//函數已調用卻沒有接收返回值，沒有輸出，需要補上int與變量
	int ans_sum = sum(x, y);//調用函數，傳入參數，返回值有接收
	printf("sum=%d\n", ans_sum);

	int n = 5;
	int f =fac(n);
	printf("%d的階乘為%d\n", n, f);

	int year = 2024;
	int leap = is_leap_year(year);
	if (leap == 1) {
		printf("%d是閏年\n", year);
	}
	else {
		printf("%d不是閏年\n", year);
	}

	for (int a = 0;a < 5;a++) {//這邊a與上面定義的a不同，這邊的a是for loop的變量，屬於局部變量
		sta();//試試看no_sta()與sta()的差別
		//static的變量只會初始化一次，下一次調用時，會保留上一次的值，靜態局部變量
	}



	return 0;
}