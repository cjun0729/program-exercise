#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//void * realloc(void*ptr,int size);
//練習部分，1.+2.
void print_malloc() {
	int m;
	printf("用戶輸入數組大小:");
	scanf_s("%d", &m);
	int* pm = (int*)malloc(m * sizeof(int));
	assert(pm != NULL);
	for (int i = 0; i < m;i++) {
		scanf_s("%d", &*(pm + i));
	}
	printf("輸入的數組為:");
	for (int i = 0; i < m;i++) {
		printf("%d ", *(pm + i));
	}
	printf("\n");
	printf("輸入的總和為:");
	int sum = 0;
	for (int i = 0; i < m;i++) {
		sum = sum + *(pm + i);
	}
	printf("%d", sum);

	free(pm);//只能用於釋放動態開闢，其後pma變為野指針
	pm = NULL;//野指針置為空
	printf("\n====================================\n");
}




int main() {
	int n = 5;
	int* pma = (int*)malloc(n * sizeof(int));//分配5個int類型
	assert(pma != NULL);
	if (pma == NULL) {
		printf("申請失敗");
		return -1;
	}
	for (int i = 0;i < n;i++) {
		*(pma + i) = i + 1;
	}
	for (int i = 0;i < n;i++) {
		printf("%d", *(pma + i));
	}
	printf("\n====================================\n");
	//現在要40個byte
	int *pre = NULL;
	pre=(int*) realloc(pma, n * sizeof(int) * 2);//重新指向內存，原來數值丟失
	
	if (pre != NULL) {
		printf("申請成功");
		pma=pre;
		for (int i = 0;i < n * 2;i++) {
			printf("%d ", *(pma + i));
		}
	}
	free(pma);//只能用於釋放動態開闢，其後pma變為野指針
	pma = NULL;//野指針置為空
	printf("\n====================================\n");
	//==========================================
	//練習
	//實現以下功能
	/*1
	1.用戶輸入數組大小m
	2.malloc創建
	3.輸入m個整數並存入
	4.計算並打印全部的和
	5.釋放動態分配
	*/
	
	int m;
	printf("用戶輸入數組大小:");
	scanf_s("%d", &m);
	int* pm = (int*)malloc(m * sizeof(int));
	for (int i = 0; i < m;i++) {
		scanf_s("%d",&*(pm+i));
	}
	printf("輸入的數組為:");
	for (int i = 0; i < m;i++) {
		printf("%d ", *(pm + i));
	}
	printf("\n");
	printf("輸入的總和為:");
	int sum = 0;
	for(int i = 0; i < m;i++) {
		sum = sum + *(pm + i);
	}
	printf("%d", sum);

	free(pm);//只能用於釋放動態開闢，其後pma變為野指針
	pm = NULL;//野指針置為空
	printf("\n====================================\n");
	//=========================================
	//函數化
	print_malloc();



	return 0;
}