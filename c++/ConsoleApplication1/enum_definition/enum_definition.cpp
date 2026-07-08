#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum Day {
	Mon=1,//枚舉常量，可以給定初始值
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun,
};

//練習:模擬交通燈的轉換，紅->綠->黃->紅
enum Traffic_Light {
	Red,
	Green,
	Yellow,
};
	
	

int main() {
	printf("%d\n", Mon);
	printf("%d\n", Tues);
	printf("%d\n", Wed);
	//主要枚舉就是增加可讀性不會有一堆int
	enum Traffic_Light light = Red;
	for (int i = 0;i < 3;i++) {
		switch (light) {
			case Red:
				printf("Red\n");
				light = Green;
				break;
			case Green:
				printf("Green\n");
				light = Yellow;
				break;
			case Yellow:
				printf("Yellow\n");
				light = Red;
				break;
		}
	}

	return 0;
}