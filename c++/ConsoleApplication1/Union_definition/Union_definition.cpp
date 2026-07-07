#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//不同於結構體，全部數據共用一個內存空間;
union Un {
	char c[5];//5 Byte
	int i;//4 Byte
	//得到8 byte的空間
};
union Un2 {
	short s[7];//14 Byte
	int i2;//4 Byte
	//得到16 byte的空間
};

int main() {
	union Un un = { 0 };//初始化全部為0
	union Un2 un2 = { 0 };
	printf("%d\n", sizeof(un));//至少是最大成員的大小
	printf("%d\n", sizeof(un2));
	return 0;
}