#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//第一題:依據程式碼註釋對應輸出
int main() {
	int a[] = { 1,2,3,4,5};
	printf("%zu\n", sizeof(a));
	//4*5=20
	printf("%zu\n", sizeof(a+1));
	//&arr[1]=8
	printf("%zu\n", sizeof(a[1]));
	//4
	printf("%zu\n", sizeof(&a));
	//&arr[0]=8
	printf("%zu\n", sizeof(&a+1));
	//加了整個數組，但還是地址，8byte
	printf("%zu\n", sizeof(&a[0]));
	//8byte
	printf("%zu\n", sizeof(&a[0]+1));
	//8byte
	//===========================================
	printf("==================\n");
	//第二題
	int* ptr = (int*)(&a + 1);
	printf("%d,%d\n", *(a + 1)/*取a[0]+1=a[1]地址內的值*/, *(ptr - 1)/*prt=a+1個數組，減1個int回到arr[4]*/);
	//輸出2,5
	printf("==================\n");
	//第三題
	const char* b[] = {"a","b","c"};
	const char** pb = b;
	pb++;
	//指針加1，去掉*求sizeof
	//一級+1，加4個byte
	//二級+1，加8個byte
	printf("%s\n", *pb);
	//%s自帶解一次引用


	return 0;
}



