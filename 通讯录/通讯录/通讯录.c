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
	// ����ͨѶ¼
	struct Contact con;// ͨѶ¼
	// ��ʼ��ͨѶ¼
	InitContact(&con);
	menu();
	do
	{
		
		
		printf("��ѡ��");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}