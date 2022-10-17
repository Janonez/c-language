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
//int main()
//{
//	//40个字节 - 10个整型
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
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.1 对NULL指针的解引用操作
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

// 3.2 对动态开辟空间的越界访问
//int main()
//{
//	int*p = (int*)malloc(20);
//	if (p == NULL)
//		return 1;
//	//使用
//	int i = 0;
//	for (i = 0; i < 20; i++) // 误把字节数当做循环次数，越界访问
//	{
//		*(p + i) = i;
//		//p[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// 3.3 对非动态开辟内存使用free释放
int main()
{
	int num = 10;
	int* p = &num;
	free(p);
	p = NULL;

	return 0;
}