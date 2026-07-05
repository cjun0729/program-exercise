#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	//int 類型
	int a = 10;
	int* p = &a;//int *定義指針變量
	/*
	printf("%p\n",&a );
	printf("%p\n",p);
	*/
	//-----------------------------
	//更多類型
	short sh = 100;
	short* psh = &sh;
	//-----------------------------
	//解引用
	/*
	printf("%d\n", *p);//解引用，取出指針指向的值"
	*/
	//指針修改內容
	char c = 'A';
	char* pc = &c;
	/*
	*pc = 'K';
	printf("%c\n", *pc);
	printf("%c\n", c);
	*/
	//可透過修改指針的值，間接修改變量的值
	//-----------------------------
	//比較指針大小
	/*
	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(psh));
	printf("%d\n", sizeof(p));
	*/
	//-----------------------------
	// 進階篇
	//指針的地址可以運算
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr = &arr[0];//拿出陣列的首地址
	printf("%p\n", parr);
	printf("%p\n", &arr[0]);
	printf("======================\n");
	//指針+1操作
	printf("%p\n", parr+1);
	printf("%p\n", &arr[1]);//尾數前相同位於同塊ram
	printf("======================\n");
	//訪問指針內容，ex:訪問2
	printf("%d\n", *(parr + 1));//同arr[1]

	return 0;
}
