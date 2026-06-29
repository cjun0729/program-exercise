#include <stdio.h>

int main()
{
	//輸入
	//int n;
	//scanf_s("%d", &n);
	//------------------------------------------
	//if練習與說明
	/*

	if ( n % 2 != 0)
	{
		printf("%d是奇數\n",n);
	}
	else
	{
		printf("%d是偶數\n", n);
	}

	*/
	//------------------------------------------
	// if ,else if, else
	 
	/*
	int age;
	printf("請輸入年齡:");
	scanf_s("%d",&age,sizeof(age));
	if(age<0)
	{
		printf("輸入錯誤\n");
	}
	
	else if(age>=18)
	{
		printf("成年\n");
	}
	else if (age < 18)
	{
		printf("未成年\n");
	}

	*/
	//------------------------------------------
	//switch練習與說明，常用於多條件匹配常數
	int a = 4;
	switch (a) {
	case 1://必須為常數值
		printf("a=1\n");
		break;
	case 2:
		printf("a=2\n");
		break;
	default:
		printf("無匹配\n");
		break;
	}
	//switch第二種用法，無break，會繼續執行後續的case
	int day;
	printf("請輸入星期幾(1-7):");
	scanf_s("%d", &day);
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("輸入錯誤\n");
		break;
	}


return 0;
}
