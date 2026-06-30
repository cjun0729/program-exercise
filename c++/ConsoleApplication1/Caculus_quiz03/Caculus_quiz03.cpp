#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
int main()
{//3*3矩陣轉置
/*{1,2,3},
* {4,5,6},
* {7,8,9}
* 變成，TIPS:	行和列互換
* {1,4,7}.
* {2,5,8},
* {3,6,9}
*/
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int arr1[3][3] = { 0 };
	//1.列出1行之各列
	//2.save it to another matrix,matrix2
	//3,transform matrix2i,j to matrix3j,i
	for (int i = 0;i < 3;i++) {//處理row
		for (int j = 0;j < 3;j++) {//處理colum
			
			arr1[j][i] = arr[i][j];
			
		}
	}

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}


	return 0;
}