#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//void *calloc (int num,int size);
int main() {
	int n = 5;
	int*cal=(int*)calloc(n,sizeof(int));//calloc內部默認為0，更安全但不如malloc方便
	assert(cal != NULL);
	if (cal== NULL) {
		printf("開闢失敗");
		return -1;
	}
	for (int i = 0;i < n;i++) {
		*(cal + i) = i + 1;
	}
	for (int i = 0;i < n;i++) {
		printf("%d", *(cal + i));
	}

	free(cal);
	cal = NULL;
	return 0;
}