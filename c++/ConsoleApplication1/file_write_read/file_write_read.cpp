#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main() {
	//開文件
	FILE* pr = fopen("./input.txt", "r");
	FILE* pw = fopen("./output.txt", "w");//文件不存在則創建
	
	if (pr == NULL) {
		printf("error");
		return -1;
	}
	printf("\n====================================\n");

	fclose(pr);
	pr = NULL;
	fclose(pw);
	pw = NULL;
	//操作文件
	FILE* p_i = fopen("./input.txt", "w");
	fputc('f', p_i);//如果第一行有東西會被覆蓋過去
	fputc('p', p_i);
	fclose(p_i);
	p_i = NULL;
	//讀取文件內容
	FILE* p_in = fopen("./input.txt", "r");
	
	int ch = -1;
	
	while ((ch = fgetc(p_in))!=EOF) {
		printf("%c\n", ch);
	}
	fclose(p_in);
	p_in = NULL;

	printf("\n====================================\n");
	// ======================================================
	//fputs函數-> 從文件中寫入資料_用於文字資料
	// int puts(char*str,FILE *p)
	FILE* puts = fopen("./input2.txt", "w");
	const char* str_puts = "I am so handsome";
	fputs(str_puts, puts);
	fclose(puts);
	puts = NULL;
	printf("\n====================================\n");
	// ======================================================
	//fgets函數 -> 從文件中抓出資料_用於文字資料
	// char*fgets(char*str,FILE *p)
	FILE* gets = fopen("./input2.txt", "r");
	char str_gets[100];
	fgets(str_gets, sizeof(str_gets), gets);
	printf("%s", str_gets);
	fclose(gets);
	gets = NULL;
	printf("\n====================================\n");
	//=========================================================
	//fwrite -> 從文件中寫入資料_用於二進制資料
	//size_t fwrite(ptr,  size, count, stream);
	FILE* write = fopen("./input_fwrite.txt", "wb");//二進制開檔案
	
	int arr[] = { 1,2,3,4,5 };
	int len_arr = sizeof(arr) / sizeof(arr[0]);
	int count = fwrite(arr, sizeof(int), len_arr, write);
	if (count != len_arr) {
		perror("fwrite");
	}
	fclose(write);
	write = NULL;
	printf("\n====================================\n");
	//=========================================================
	//fread -> 從文件中寫入資料_用於二進制資料
	//size_t fread(ptr,  size, count, stream);
	FILE* read = fopen("./input_fwrite.txt", "rb");//二進制讀檔案

	int arr_read[5] ;
	int size = fread(arr_read, sizeof(int), len_arr, read);
	if (size != len_arr) {
		perror("fread");
	}
	
	for (int i = 0;i < len_arr;i++) {
		printf("%d", arr_read[i]);
	}

	fclose(read);
	read = NULL;
	printf("\n====================================\n");


	return 0;
}