#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//指針交換進接
//錯誤用法1.
void swap(int x, int y) {
	int temp = x;
	x = y;
	y = x;
}
void swap2(int * pa,int *pb){
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	//大小端
	int n = 0x11223344;
	int* pn = &n;
	char* pc = (char*)&n;
	//%x輸出16進位
	printf("%x\n", *pn);//輸出4個字節
	printf("%x\n", *pc);//輸出1個字節
	//-----------------------------
	//野指針說明，參考指針說明02
	//-----------------------------
	//交換
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);//a=10,b=20
	swap(a, b);
	printf("a=%d,b=%d\n", a, b);//調換後不改變
	swap2(&a, &b);
	printf("a=%d,b=%d\n", a, b);//調換成功，直接改變變量的值
	//-----------------------------
	//例題實作1
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;//同pulArray[0]
	*(pulPtr + 3) += 3; 
	//*(pulPtr + 3)=*(pulPtr + 3) + 3;
	//原本pulPtr + 3=pulArray[3]，解引用後* *(pulPtr + 3) = 9
	
	//解說完
	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
	//例題實作2
	int arr[] = { 1,2,3,4,5 };
	short* ps = (short*)arr;//強制轉型，將int陣列轉成short陣列
	int i = 0;
	for (i = 0; i < 4; i++) {
		*(ps + i) = 0;
	}
	for (i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}


	return 0;
}