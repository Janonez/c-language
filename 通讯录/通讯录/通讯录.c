#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
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
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:	
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		/*case 7:
			FormatContact(&con);
			break;*/
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}