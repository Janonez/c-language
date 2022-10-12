#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
int main()
{
	int input = 0;
	do
	{
		// 创建通讯录
		struct Contact con;// 通讯录
		// 初始化通讯录
		InitContact(&con);

		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;

		}
	} while (input);
	return 0;
}