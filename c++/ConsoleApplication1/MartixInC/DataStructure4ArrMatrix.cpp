#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
int main()
{//同matlab的matrix形式，先行再列，但是C語言由0開始
	//int arr[2][3] = { 1,2,3,4,5,6 }
	int arr0[2][3] = { 0 };
	int arr[2][3] = { {1,2,3},{4,5,6} };//同matlab[1,2,3;4,5,6]
	int arr2[2][3] = { {1,2,3},{4} };//[1,2,3;4,0,0]
	int arr4[][3]= { {1,2,3},{4,5,6} };
	printf("%d\n", arr4[1][2]);//6
	//訪問數組所有數據;訪問完1行再2行
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	//輸入
	printf("輸入2*3矩陣:");
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 3;j++) {
			scanf_s("%d", &arr0[i][j]);
			
		}
		printf("\n");
	}

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d ", arr0[i][j]);

		}
		printf("\n");
	}
	
	return 0;
}