#include<stdio.h>
main()
{
	float s, h;
	printf("请输入摄氏温度\n");
	scanf_s("%f", &s);
	h = s * 9 / 5 + 32;
	printf("华氏温度为%f", h);
	getchar();
	getchar();
	//我加了一行注释
}