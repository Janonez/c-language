#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
// welcome to bit!!!!!
// w#################!
// we###############!!
// ...
// welcome to bit!!!!!

//int main()
//{
//	char arr1[] =  "welcome to bit!!!!!";
//	char arr2[] =  "###################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

// ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��½�ɹ���������������˳�����
// ��ȷ���� bitbit

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:\n");
//		scanf("%s", password);
//		if (strcmp(password, "bitbit") == 0) // strcmp => string compare �ж��ַ����Ƿ����
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	return 0;
//}

// ��������Ϸ
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("********* 1.play ***********\n");
//	printf("********* 0.exit ***********\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	// 1.���������
//	// rand�����������������������һ��0~RAND_MAX(32767)
//	int ret = rand() % 100 + 1;// ���һ��1~100�������
//	// 2.������
//	
//	while (1)
//	{
//		printf("������֣�\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´��ˡ�\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С�ˡ�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˡ�\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	// ���������������
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
//			printf("������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//flag:
//	printf("��ע����ĵ��Խ���һ���Ӻ�ػ��������룺������ȡ���ػ�\n");
//	scanf("%s",arr);
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("�ػ�ȡ��\n");
//	}
//	else
//	{
//		goto flag;
//	}
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "Hello Bit!";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr[20] = "Hello Bit";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("%d", max);
//	return 0;
//}

//void swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
// ���������õ�ʱ��ʵ��(a,b)�����β�(x,y)�ǣ��β���ʵ�ε���ʱ����
// ���βε��޸��ǲ�Ӱ��ʵ�ε�
void swap(int* px, int* py)
{
	int t = 0;
	t = *px;
	*px = *py;
	*py = t;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("����ǰ��a=%d b=%d\n", a, b);
	// swap(a,b); ��ֵ����
	swap(&a, &b);// ����ַ����ַ����
	printf("������a=%d b=%d\n", a, b);
	return 0;
}

//// ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}