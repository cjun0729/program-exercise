#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

extern int ADD(int a, int b);
//static後鎖死在文件中，extern引用變量

int main() {

	printf("%d", ADD(1, 2));

	return 0;
}

