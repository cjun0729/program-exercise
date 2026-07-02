#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//可參考leetcode88.
//題目:輸入兩個升序的排列，合併為一個有序序列並輸出
//數據範圍1<=n,m<=1000，值滿足0<=val<=30000
//輸入描述:輸入包含三行，第一行包含兩個正整數，用空格隔開，n表示第二行的數字個數，m表示第三行的數字個數，第二行包含n個升序排列的整數，第三行包含m個升序排列的整數
//輸出描述:輸出包含一行，包含n+m個升序排列的整數，數字之間用空格隔開
//-------------------------------------------------------

int main()
{
    int n;
    int m;
	scanf("%d %d", &n, &m);

    int arr1[1000];

	int arr2[1000];
    //輸入n個元素
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}

	for (int i = 0; i < m; i++) {
		scanf("%d", &arr2[i]);
	}

	//邏輯處理:兩個分別比較值，誰小誰先打印，盡量別用for，會變成對對看
	int i = 0;
	int j = 0;
	while (i<n && j<m) {//這樣變成其中一個指針會先走完
		if (arr1[i] < arr2[j]) {
			printf("%d ", arr1[i]);
			i++;//打印完後，i++，下一個元素
		}
		else {
			printf("%d ", arr2[j]);
			j++;//打印完後，j++，下一個元素
		}
	}
	while (i < n) {//如果arr1還有剩餘元素，直接打印)
		printf("%d ", arr1[i]);
		i++;
	}
	while (j < m) {//如果arr1還有剩餘元素，直接打印)
		printf("%d ", arr2[j]);
		j++;
	}
    return 0;
}
