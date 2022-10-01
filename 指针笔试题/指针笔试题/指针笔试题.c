#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);
	// (&a + 1)原本的类型是数组指针 int(*)[5],强制转换成int*类型
	printf("%d,%d", *(a + 1), *(ptr - 1));// 2,5
	return 0;
}