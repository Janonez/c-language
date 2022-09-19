#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		
//		sum += flag * (1.0 / i);
//		flag = -flag;
//		
//	}
//	printf("%lf ", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("************************\n");
//	printf("******* 1.play *********\n");
//	printf("******* 0.exit *********\n");
//	printf("************************\n");
//
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���!\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��!\n");
//		}
//		else
//		{
//			printf("��ϲ�����¶���!\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = size - 1;
	int input = 0;
	scanf("%d", &input);

	while (left <= right)
	{
		int mid = (right - left) / 2 + left;
		if (arr[mid] > input)
		{
			right = mid - 1;
		}
		else if (arr[mid] < input)
		{
			left = mid + 1;
		}
		else
		{
			printf("�±�Ϊ��%d\n", mid);
			break;
		}

	}
	while (left > right)
	{
		printf("�Ҳ���\n");
		break;
	}

	return 0;
}

