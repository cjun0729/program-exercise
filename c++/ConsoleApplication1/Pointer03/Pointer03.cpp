#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//數組名表示
//透過指針、void打印arr
void printf_arr(int *pa,int len) {
	for (int i = 0;i < len;i++) {
		printf("%d ", *(pa+ i));
	}
}

int main() {
	int arr[] = { 1,2,3,4,5,9};
	int* pa = arr;//arr[0]
	//int* pa = &arr;___錯誤，這等於把整個地址塞進int中
	//記住，C語言不像matlab可以單獨讀矩陣

	printf("%p\n", arr);
	printf("%p\n", pa);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);//雖然輸出地址一樣，但是這個是整個數組的地址
	//=========================
	printf("============================\n");
	//解引用
	printf("%d\n", *(pa + 5));//輸出9
	printf("%d\n", *(pa) + 5);//輸出多少?__A:輸出6__證明先解引用再+-數字

	//=========================
	//透過指針、void打印arr
	int len = sizeof(arr) / sizeof(arr[0]);
	printf_arr(pa, len);
	printf("\n============================\n");
	//接著看說明3的級別
	//一級指針
	int a = 10;
	int* p1 = &a;
	printf("%p\n", p1);
	printf("%p\n", &a);
	printf("%d\n", *p1);
	//二級指針
	int** p2 = &p1;
	printf("%p\n", p2);
	printf("%p\n", *p2);//提取p1=地址or &a的位置
	printf("%d\n", *p2);//提取10進制的地址
	printf("%d\n", **p2);//提取到a
	printf("\n============================\n");
	//指針數組
	int b = 10;
	int c = 20;
	int d = 30;
	int* arr2[] = { &b,&c,&d };
	printf("%d\n", *(arr2 + 1));
	printf("%p\n", *(arr2 + 1));//變相的二級指針
	printf("%d\n", **(arr2 + 1));
	printf("\n============================\n");
	//數組指針
	int arr3[] = { 1,2,3,4,5 };
	int* pa1_arr = arr;
	int (*pa2_arr)[5] = &arr3;//指向長度為5的數組
	printf("%d\n", pa1_arr);
	printf("%d\n", pa1_arr + 1);//移動4byte
	printf("=============\n");
	printf("%d\n", pa2_arr);
	printf("%d\n", pa2_arr + 1);//移動20byte=一個數組單位

	return 0;
}