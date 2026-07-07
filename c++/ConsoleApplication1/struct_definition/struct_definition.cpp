#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//結構體，struct，複合數據類型
struct Student {
	char name[20];//姓名
	int age;//年齡
	char sex[5];//性別 => 1個中文2個字節
	char id[20];//學號

};
//結構體別名
struct Student2 {
	char name[20];//姓名
	int age;//年齡
	char sex[5];//性別 => 1個中文2個字節
	char id[20];//學號
};
typedef struct Student2 stu2;

//結構體傳參
void print_struct(struct Student stu1) {
	printf("%s\n", stu1.name);
	printf("%d\n", stu1.age);
	printf("%s\n", stu1.sex);
	printf("%s\n", stu1.id);
}
//指針傳參
void print_struct_pointer(struct Student *pstu) {
	printf("%s\n", (*pstu).name);
	printf("%d\n", (*pstu).age);
	printf("%s\n", (*pstu).sex);
	printf("%s\n", (*pstu).id);
}


int main() {
	struct Student stu1 = { "田所浩二",24,"男","114514" };
	struct Student* pstu = &stu1;//結構體指針
	printf("============函數傳參===========\n");
	print_struct(stu1);
	printf("===============================\n");
	printf("============指針傳參===========\n");
	print_struct_pointer(pstu);
	printf("===============================\n");
	printf("============原生打印==========\n");
	printf("%s\n", stu1.name);
	printf("%d\n", stu1.age);
	printf("%s\n", stu1.sex);
	printf("%s\n", stu1.id);
	printf("===============================\n");
	//======================================
	
	//訪問寫法
	printf("%s\n", (*pstu).name);//先解引用再搜索
	//解引用指向符->
	printf("%s\n", pstu->id);
	printf("============================\n");
	//======================================
	//別名用法
	stu2 s2 = { "田所浩二",24,"男","114514" };
	printf("%s\n",s2.name);



	return 0;
}
