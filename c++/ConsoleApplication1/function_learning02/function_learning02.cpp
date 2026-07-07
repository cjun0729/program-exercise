#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//練習:實現strcpy函數
char* my_strcpy(char*dest,const char*src) {
	char* tmp = dest;
	while (*src != '\0') {
		*dest = *src;//地址內值相同
		src++;
		dest++;//地址移到下一位
	}
	*dest = '\0';

	return tmp;
}//返回拷貝完的地址

int main() {
	//字符串常用函數
	//===================
	//strlen => 計算字符串長度
	const char* str = "hello";
	int len = strlen(str);//自主停在\0停止計算
	printf("%d\n", len);
	//===========================================
	//strcpy => 複製字符串
	char dest[15];
	const char* src = "abcdef";
	strcpy(dest, src);
	printf("%s\n", dest);
	//===========================================
	//strcat => 字符串連接
	strcat(dest, str);//後項接至前項
	printf("%s\n", dest);
	//===========================================
	//strcmp => 字符串比較大小
	const char* str1 = "abcdef";
	const char* str2 = "abc";
	int strc= strcmp(str1, str2);
	printf("%d\n",strc);//輸出1代表前項較大，輸出-1代表後項較大，輸出0代表相等
	//===========================================
	//strncpy => 複製字符串指定項目
	char dest2[15] = { 0 };
	const char* str3 = "1234567";
	char*cpy= strncpy(dest2, str3, 4);
	printf("%s\n", cpy);
	//===========================================
	//練習:實現strcpy函數
	char dest3[15];
	const char* my_src = "abcdef";
	char* ret = my_strcpy(dest3, my_src);
	printf("%s\n", ret);


	return 0;
}