#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int n= 0x11223344;
//返回1代表小端，返回0代表大端
//利用指針判斷大小端問題
int check() {
    int n = 0x11223344;
    char* pn = (char*) & n;
    if (*pn == 0x44) {
        return 1;
    }
    else {
        return 0;
    }
}
//利用聯合體判斷大小端問題
int check_un(){
    union Un {
        char c;
        int i;
    }un;//共用內存導致資料互存
    un.i= 0x11223344;
    return un.c;
}



int main()
{
    printf("============指針題==========\n");
    int ret = check();
    if (ret) {
        printf("當前是小端\n");
    }
    else {
        printf("當前是大端\n");
    }
    printf("============聯合體題==========\n");
    int ret_un = check_un();
    if (ret_un==0x44) {
        printf("當前是小端\n");
    }
    else {
        printf("當前是大端\n");
    }


    return 0;
}

