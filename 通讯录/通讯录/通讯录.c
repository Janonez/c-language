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
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:	
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}