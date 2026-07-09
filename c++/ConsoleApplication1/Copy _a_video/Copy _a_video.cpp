#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//自己理解的寫法
int main() {
	//1.打開文件
	FILE* media = fopen("./turn_off_light.jpg", "rb");//二進制讀取
	if (media == NULL) {
		perror("fopen");
		printf("error");
		return 1;
	}
	FILE* copy = fopen("./turn_off_light-副本.jpg", "wb");//二進制寫入
	if (copy == NULL) {
		perror("fopen");
		printf("error");
		return 1;
	}
	//複製步驟
	unsigned char buffer[65536];//對齊問題採用1 byte的 char
	size_t written = 0;//計read回傳剩餘數值
	size_t all_read = 0;
	int count = 0;
	size_t zu_count = 0;//
	//流程1.read檔案每個byte然後讀取，必須重複讀完直到回傳0
	//流程2.write每次寫入read的回傳值，讀完回傳0
	while (1) {
		//無限讀取
		written = fread(buffer, 1, 65536, media);//fread(放入位置,每次大小,最多,來源)
		//讀完同步進行寫入
		all_read = fwrite(buffer, 1, written, copy);//fwrite(來源,每次大小,最多,放入位置)
		zu_count += all_read;//計入寫入多少
		//判斷停止1.寫入錯誤中斷
		if (all_read != written) {
			perror("all_read != written，寫入錯誤");
			printf("寫入錯誤\n");
			break;
		}
		else if (all_read == 0) {//判斷停止2.寫入完成
			printf("寫入完成\n");
			break;
		}
		
		count++;
	}

	printf("寫入大小:%zu\n", zu_count);
	printf("共寫入%d次\n", count);

	fclose(media);
	media = NULL;
	fclose(copy);
	copy = NULL;

	return 0;
}



/*

int main() {
	//1.打開文件
	FILE* media = fopen("./turn_off_light.jpg", "rb");
	if (media == NULL) {
		perror("fopen");
		printf("error");
		return 1;
	}
	FILE* copy = fopen("./turn_off_light-副本.jpg", "wb");
	if (copy == NULL) {
		perror("fopen");
		printf("error");
		return 1;
	}
	//2.開始拷貝
	unsigned char buffer[65536];
	//2.1校驗
	size_t byte_read = 0;//每次讀到字節數
	size_t total_byte = 0;
	int count = 0;
	while ((byte_read=fread(buffer,1,sizeof(buffer),media))>0) {//fread(放入位置,每次大小,最多,來源)
		count++;
		size_t written = fwrite(buffer, 1, byte_read, copy);//fwrite(來源,每次大小,最多,放入位置)
		if (written != byte_read) {
			perror("寫入失敗");
			break;
		}
		total_byte += written;
	}


	printf("拷貝結束，共%zu Bytes\n", total_byte);
	printf("讀取次數%d", count);
	fclose(media);
	media = NULL;
	fclose(copy);
	copy = NULL;
	return 0;
}
*/
