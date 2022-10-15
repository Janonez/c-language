#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	// int arr[10]; // 向内存申请40个字节
//	int* p = (int*)malloc(10*sizeof(int));
//	int* ptr = p;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// 使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;
//	}
//	// 释放
//	free(p);
//	p = NULL;
//	ptr = NULL;
//	return 0;
//}
//
////calloc
int main()
{
	//40个字节 - 10个整型
	//malloc(40);
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("calloc");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	//释放
	free(p);
	p = NULL;

	return 0;
}
