#define _CRT_SECURE_NO_WARNINGS 1
//void qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
#include <stdio.h>
// ±È½Ïº¯Êý
int int_cmp(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);// ÉýÐò
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}