#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}