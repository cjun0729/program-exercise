#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//void * malloc();//使用需要轉換
//Leetcode 1929 数组串联
int* getConcatenation(int* nums, int numsSize) {
	int returnSize = 2 * numsSize;
	int* ans = (int*) malloc(returnSize * sizeof(int));//創建malloced數組
	for (int i = 0;i < numsSize;i++) {
		*(ans + i) =*(nums+i);
	}
	for (int i = 0;i < numsSize;i++) {
		*(ans + i + numsSize) = *(nums + i);
	}
	return ans;
}



int main() {
	int n = 5;
	int*pma=(int*) malloc(n * sizeof(int));//分配5個int類型
	assert(pma != NULL);
	if (pma == NULL) {
		printf("申請失敗");
		return -1;
	}
	for (int i = 0;i < n;i++) {
		*(pma + i) = i + 1;
	}
	for (int i = 0;i < n;i++) {
		printf("%d",*(pma+i));
	}
	//當前代碼沒有賦值但有保留空間於堆上
	//堆上使用完成後要手動釋放回收
	free(pma);//只能用於釋放動態開闢，其後pma變為野指針
	pma = NULL;//野指針置為空
	printf("\n====================================\n");
	//==================================================
	//Leetcode 1929 数组串联
	int nums[] = { 1,2,1 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int *p_ans=getConcatenation(nums, numsSize);
	for (int i = 0;i < 2 * numsSize;i++) {
		printf("%d", *(p_ans + i));
	}
	free(p_ans);//只能用於釋放動態開闢，其後pma變為野指針
	p_ans = NULL;//野指針置為空
	printf("\n====================================\n");


	return 0;
}