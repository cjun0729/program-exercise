// PrintfAndScanf.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    //佔位符
	printf("買%d個蘋果,再買%d個橘子\n", 6, 7);//%d 十進位整數
	printf("The first alphagraph is %c\n", 'A');//%c 字符char
	printf("我的名字是%s\n", "Emilia");//% s 字串

	//指定佔位符寬度
	printf("%5d\n", 123);//%5d 佔位符寬度為5，右對齊，前面補空格
	printf("%5d\n", 12345);
	printf("%5d\n", 123456);//超出不影響
	printf("%-5d\n", 123);//%-5d 佔位符寬度為5，左對齊，後面補空格)

	//限定小數
	printf("Number is %f\n",0.5);
	printf("Number is %.2f\n",0.5);
	printf("Number is %6.2f\n", 0.5);

	/*
	
	//scanf，用於獲取鍵盤輸入
	int score = 0;
	printf("請輸入分數:");
	scanf_s("%d", &score);//&取地址符號，將輸入的值存入score變量中
	//同matlab的input函數
	printf("你輸入的分數是:%d\n", score);
	
	*/

	/*

	//一次性輸入多個變量
	int a = 0;
	int b = 0;
	float f = 0.0f;
	printf("請輸入兩個整數和一個小數:");
	scanf_s("%d %d %f", &a, &b,&f);//輸入整數、整數、小數
	printf("你輸入的數是:%d,%d,%.3f\n", a, b,f);

	*/

	//scanf佔位符與限制
	char name[10] = "steve";
	//定義一個長度為10的字符陣列，並初始化為steve
	printf("輸入名字:");
	scanf_s("%9s", name, sizeof(name));
	printf("你輸入的名字是:%s\n", name);




	return 0;
}

