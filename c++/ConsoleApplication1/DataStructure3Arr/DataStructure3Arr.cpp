// DataStructure2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <stdbool.h>

int main()
{
	//int arr1[5] = { 1,2,3,4,5 };//對應開頭0
	////		   下標{0,1,2,3,4};
	//printf("%d\n", arr1[2]);//輸出3
	////--------------------------------------------
	//int arr2[] = { 1,2,3,4,5,6,7,8,9 };//根據元素決定長度
	//printf("%d\n", arr2[7]);//輸出8

	//int i=0;
	//for (i = 0;i < 9;i++) {
	//	printf("%d", arr2[i]);
	//}
	//printf("\n");
	////打印元素地址
	//int arr3[10] = { 1,2,3,4,5,6,7,8,9.10 };
	//int j = 0;
	//for (j ;j < 10;j++) {
	//	printf("&arr[%d]=%d\n", j, &arr3[j]);//%p為16進制
	//	//%d顯示十進制，各差4byte
	//}
	//練習arr，寫逆制輸出
	int arr4[]= { 1,2,3,4,5,6,7,8,9.10 };
	int len = sizeof(arr4) / sizeof(arr4[0]);//10
	int i = 0;//對應位置0
	int j = len - 1;//對應位置n-1
	int tmp=0;
	while (i < j) {
		tmp = arr4[i];//把第一位抓出
		arr4[i] = arr4[j];//把最後一位給第一位
		arr4[j] = tmp;//把第一位給最後一位
		i++;//往前
		j--;//後退
	}//while先換完
	//for則一個個抓出換完的值
	for (int i = 0; i< len;i++) {
		printf("%d", arr4[i]);
	}
	printf("\n");
	//練習:每個元素擴大一倍
	int arr5[] = { 1,2,3,4,5 };
	int len1= sizeof(arr5) / sizeof(arr5[0]);
	for (int k = 0;k < len1;k++) {
		arr5[k] = arr5[k] * 2;//後面可填入數字，也就是可更改任一項之數
		printf("%d", arr5[k]);
	}
	


  return 0;
}

