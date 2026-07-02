#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
//第一題，轉置矩陣
//第二題，矩陣逆置，要求使用自訂函數，void=泛性指標;不return
//第二題函數要求，Print打印，Reverse逆置
void Print(int arr[], int len) {
	for (int i=0; i < len;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[], int len) {
	int temp;//事前處理
	int i = 0;
	for (int i = 0; i < len/2;i++) {//如果超過一半會重複對調
		int j = len - 1 - i;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for (int i = 0; i < len;i++) {
		printf("%d ", arr[i]);
	}
	
}
//-------------------------------------------------------

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
	int arr0[3][3] = {
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
			
			arr1[j][i] = arr0[i][j];
			
		}
	}

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//呼叫函數
	Print(arr, len);
	Reverse(arr, len);

	return 0;
}