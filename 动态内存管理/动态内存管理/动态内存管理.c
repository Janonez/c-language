#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	// int arr[10]; // ���ڴ�����40���ֽ�
//	int* p = (int*)malloc(10*sizeof(int));
//	int* ptr = p;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;
//	}
//	// �ͷ�
//	free(p);
//	p = NULL;
//	ptr = NULL;
//	return 0;
//}
//
////calloc
//int main()
//{
//	//40���ֽ� - 10������
//	//malloc(40);
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.1 ��NULLָ��Ľ����ò���
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		*p = 5;
//	}
//	
//	free(p);
//	p = NULL;
//	
//	return 0;
//}

// 3.2 �Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int*p = (int*)malloc(20);
//	if (p == NULL)
//		return 1;
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 20; i++) // ����ֽ�������ѭ��������Խ�����
//	{
//		*(p + i) = i;
//		//p[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// 3.3 �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
int main()
{
	int num = 10;
	int* p = &num;
	free(p);
	p = NULL;

	return 0;
}