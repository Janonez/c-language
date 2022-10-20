#define _CRT_SECURE_NO_WARNINGS 1
//qsort 可以排序任意类型的数据
//void qsort(void* base,size_t num,size_t size,int (*cmp)(const void*, const void*));
//待排序数据的起始地址,待排序数据的元素个数,待排序数据元素的大小（单位是字节）,比较2个元素大小的函数指针
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//// 测试qsort函数排序整型数据
//int int_cmp(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);// 升序
//}
////测试qsort排序结构体数据
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int stu_cmp_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int stu_cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	struct Stu s[] = { {"zhangsan", 20}, {"lisi", 55}, {"wangwu", 40} };
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(struct Stu), stu_cmp_age);
//	for (i = 0; i < sizeof(s) / sizeof(s[0]); i++)
//	{
//		printf("%s %d ", s[i].name,s[i].age);
//	}
//	printf("\n");
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(struct Stu), stu_cmp_name);
//	for (i = 0; i < sizeof(s) / sizeof(s[0]); i++)
//	{
//		printf("%s %d ", s[i].name, s[i].age);
//	}
//	printf("\n");
//
//	return 0;
//}

// qsort模拟实现（冒泡排序）
#include <stdio.h>
#include <string.h>
struct Stu
{
	char name[20];
	int age;
};
// 比较函数
int int_cmp(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);// 升序
}
int stu_cmp_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int stu_cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
// 交换函数
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1,const void* e2))// 函数指针
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width, (char*)base + (j+1) * width)>0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), int_cmp);
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	struct Stu s[] = { {"zhangsan", 20}, {"lisi", 55}, {"wangwu", 40} };
	bubble_sort(s, sizeof(s) / sizeof(s[0]), sizeof(struct Stu), stu_cmp_age);
	for (i = 0; i < sizeof(s) / sizeof(s[0]); i++)
	{
		printf("%s %d ", s[i].name,s[i].age);
	}
	printf("\n");
	bubble_sort(s, sizeof(s) / sizeof(s[0]), sizeof(struct Stu), stu_cmp_name);
	for (i = 0; i < sizeof(s) / sizeof(s[0]); i++)
	{
		printf("%s %d ", s[i].name, s[i].age);
	}
	printf("\n");
	return 0;
}