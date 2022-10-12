#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
int main()
{
	int input = 0;
	// 创建通讯录
	struct Contact con;// 通讯录
	// 初始化通讯录
	InitContact(&con);
	menu();
	do
	{
		
		
		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:	
			ShowContact(&con);
			break;
		case 6:
			FormatContact(&con);
			break;
		case 7:
			SortContact(&con);
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}