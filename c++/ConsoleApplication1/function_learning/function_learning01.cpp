#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
//練習:給定一個字符數組，只包含數字、大小寫字母，統計數字個數、大寫個數、小寫個數
void count(char *pc,int len) {
	int count_upper = 0;
	int count_lower = 0;
	int count_num = 0;
	for (int i = 0;i < len;i++) {
		if (isupper(*(pc + i))) {
			count_upper++;
		}
		else if (islower(*(pc + i))) {
			count_lower++;
		}
		else if (isdigit (* (pc + i))) {
			count_num++;
		}
	}
	printf("有%d個大寫英文\n", count_upper);
	printf("有%d個小寫英文\n", count_lower);
	printf("有%d個數字\n", count_num);
}


int main() {
	//常用字符函數
	//isdigit => 判斷是否為數字字符
	char a = '7';
	int r= isdigit(a);
	if (r) {
		printf("%c是一個數字字符\n",a);
	}
	else {
		printf("%c不是一個數字字符\n", a);
	}
	printf("===============================\n");
	//=====================================
	//islower => 判斷是否為小寫字符
	//isupper => 判斷是否為大寫字符
	char b = 'b';
	int rb = islower(b);
	if (rb) {
		printf("%c是一個小寫字符\n", b);
	}
	else {
		printf("%c不是一個小寫字符\n", b);
	}
	printf("===============================\n");
	//=====================================
	//isalpha => 判斷是否為英文字符
	//isalnum=> 判斷是否為英文或數字字符
	char c = '7';
	if (isalnum(c)) {
		printf("%c是一個數字or英文字符\n", c);
	}
	else {
		printf("%c不是一個數字or英文字符\n", c);
	}
	printf("===============================\n");
	//=====================================
	//練習:給定一個字符數組，只包含數字、大小寫字母，統計數字個數、大寫個數、小寫個數
	char crr[] = "aghdhjSRED21367891";
	char* pc = crr;
	int count_upper = 0;
	int count_lower = 0;
	int count_num = 0;
	int len = sizeof(crr) / sizeof(crr[0]);
	for (int i = 0;i < len;i++) {
		if (isupper(crr[i])) {
			count_upper++;
		}
		else if (islower(crr[i])) {
			count_lower++;
		}
		else if(isdigit(crr[i])){
			count_num++;
		}
	}
	printf("有%d個大寫英文\n", count_upper);
	printf("有%d個小寫英文\n", count_lower);
	printf("有%d個數字\n", count_num);
	printf("===============================\n");
	//=====================================
	count(pc, len);

	return 0;
}



