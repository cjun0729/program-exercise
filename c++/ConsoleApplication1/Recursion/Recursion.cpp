#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//遞歸or迭代
//第一題，求階乘
int recursion(int n) {
	if (n == 1) {//起始條件
		return 1;
	}
	int result = n * recursion(n - 1);//遞歸公式
	return result;
}
//第二題，求1+2+3+...+n
int sum(int n) {
	if (n == 1) {//起始條件
		return 1;
	}
	int result = n + sum(n - 1);//遞歸公式
}
//第三題，求費氏數列第n項
//ex:1 1 2 3 5 8...=前兩項相加
int fib(int n) {
	if (n==1||n==2) {//起始條件為n=1 or n=2
		return 1;//傳遞下去;
	}
	int result = fib(n - 2) + fib(n - 1);//遞歸公式
}
//第四題，實現n的k次方，n=2, k=3, 2*2*2=8
int Pow(int n,int k) {
	if (n!=0&& k==0) {//initial
		return 1;
	}
	else {
		return 0;
	}
	int result = Pow(n, k - 1) * n;//取一次方得知公式
}

int main() {
	//第一題
	int n = 3;
	int result = recursion(n);
	printf("%d的階乘是%d\n", n,result);
	//------------------------------------------
	//第二題
	int m = 100;
	int result1 = sum(m);
	printf("%d的總和是%d\n", m, result1);
	//------------------------------------------
	//第三題
	int k = 6;
	int result2 = fib(k);
	printf("費氏數列第%d項是%d\n", k, result2);
	//------------------------------------------
	//第四題
	int a = 2;
	int b = 3;
	int result3 = Pow(a, b);
	printf("%d的%d次方是%d\n", a, b, result3);

	return 0;
}