#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w'; //常量字符串不可以修改
//	return 0;
//}

//int main()
//{
//	const char* pstr = "hello world."; 
//	// 本质是把字符串 hello worlf.首字符的地址放到了pstr中
//	printf("%s\n", pstr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";// 这里str3和str4指向的是一个同一个常量字符串，指向同一块内存
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

// 指针数组
//int main()
//{
//	/*char* arr[5] = { "abcdef","zhangsan","wangcai","hehe","ruhua" };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}*/
//
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[3] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//
//	char ch = 'w';
//	char* p2 = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	int(*p3)[10] = &arr;// 取出数组的地址放到p3中，p3是数组指针变量
//	// int(*)[10] -> 数组指针类型
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}