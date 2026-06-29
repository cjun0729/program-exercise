#include <stdio.h>

int main()
{
	//運算符加減
	int ans = 5 + 3;
	printf("5 + 3 = %d\n", ans);
	//------------------------------------------
	//運算符乘除，浮點資料結構注意
	float x = 6 / 4;
	int y = 6 / 4;
	printf("6 / 4 = %f\n", x);//輸出1.000000
	printf("6 / 4 = %d\n", y);//輸出1
	float z = (float)6 /(float) 4;
	printf("6 / 4 = %f\n", z);//輸出1.500000)
	float z1 = 6.0 / 4;
	printf("6.0 / 4 = %.2f\n", z1);//輸出1.5)
	//------------------------------------------
	//運算符餘數
	int x1 = 7 % 4;
	printf("7 除以4 餘 %d\n", x1);
	//------------------------------------------
	//賦值運算
	int sum = 0;
	sum = sum + 5;//相同餘sum += 5;
	printf("第一次加總=%d\n", sum);
	sum += 10;
	printf("第二次加總=%d\n", sum);
	//------------------------------------------
	//單目操作符
	//++i, i++, --i, i--
	int a0 = 10;
	int b0 = ++a0;
	printf("a=%d, b=%d\n", a0, b0);//a=11, b=11)
	//前置遞增，先加1再賦值
	
	int a1= 10;
	int b1 = a1++;
	printf("a=%d, b=%d\n", a1, b1);//a=11,b=10)
	//後置遞增，先賦值再加1
	
	int a3 = 10;
	int b3 = --a3;
	printf("a=%d, b=%d\n", a3, b3);//先減後賦值，兩個都是9
	int a4 = 10;
	int b4 = a4--;
	printf("a=%d, b=%d\n", a4, b4);//先賦值後減，a=9,b=10)
	//------------------------------------------

	//移位運算符，移動bit位
	int num = 10;
	int numl = num << 1;//左移一位，補零，等於乘以2
	printf("num=%d\n", num);
	printf("numl=%d\n", numl);
	
	int numr = num >> 1;//右移1位，等於除以2
	printf("num=%d\n", num);
	printf("numr=%d\n", numr);

	//負數移位
	int num1 = -1;
	int numl1 = num1 << 1;//左移一位，補零，等於乘以2
	printf("num=%d\n", num1);
	printf("numl=%d\n", numl1);

	int numm = -2;
	int numlm = numm << 1;//左移一位，補零，等於乘以2
	printf("num=%d\n", numm);
	printf("numl=%d\n", numlm);

	int numr1 = -1;//右移1位，等於除以2
	int numr11 = numr1 >> 1;//右移1位，依舊為-1，跟運算位有關
	printf("num=%d\n", numr1);
	printf("numr=%d\n", numr11);
	//------------------------------------------

	//位操作符
	//&=and，|=or，^=xand，~=NOT，按位取反
	//0101 1011
	//0011 1101 &= 0001 1001，對應位都是1就是1
	//			|= 0111 1111，對應位有1就是1
	//			^= 0110 0110，對應位不同就是1
	int mun1 = -3;
	int num2 = 5;
	printf("%d\n", mun1 & num2);//-3 & 5 = 5
	printf("%d\n", mun1 | num2);//-3 | 5 = -3
	printf("%d\n", mun1 ^ num2);//-3 ^ 5 = -8
	printf("%d\n", ~0);//按位取反，0變成1，1變成0，輸出-1
	//------------------------------------------

	//關係運算符
	//==, !=, >, <, >=, <=
	int i = 1;
	int j = 2;
	printf("%d\n", i > j);//false，輸出0
	printf("%d\n", i < j);//true，輸出1
	printf("%d\n", i >= j);//false，輸出0
	printf("%d\n", i <= j);//true，輸出1
	printf("%d\n", i != j);//true，輸出1，!=不等於
	printf("%d\n", i == j);//false，輸出0
	//------------------------------------------

	//邏輯運算符
	//&&, ||, !
	//------------------------------------------

	//逗號表達式
	int k = (i > j, i = j + 10, i, j = i + 1);
	printf("k=%d\n", k);//k=13，逗號表達式，最後一個表達式的值就是整個逗號表達式的值)


	//習題
//題目:給定兩整數a和b，1<=a,b<=10000，計算整數商和餘數
//輸入:兩整數a被除數和b除數
//輸出:整數商和餘數，中間用空格隔開
	int a;
	int b;
	printf("請輸入兩整數a和b:");
	scanf_s("%d %d", &a, &b);
	printf("%d %d\n", (a / b), (a% b));


	return 0;
}
  