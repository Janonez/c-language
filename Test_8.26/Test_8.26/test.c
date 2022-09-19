#define _CRT_SECURE_NO_WARNINGS 1

//**********************是否为闰年*********************************************

//#include <stdio.h>
//
//void leap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//}
//int main()
//{
//	int year = 0;
//	printf("请输入年份：");
//	scanf("%d", &year);
//	leap(year);
//	return 0;
//}

//**********************交换数字*********************************************

//#include <stdio.h>
//
//void swap(int *px, int *py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	printf("请输入两个数：");
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换前a=%d,b=%d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d", max);
//	return 0;
//}

//**********************是否为素数*********************************************

//#include <stdio.h>
//#include <math.h> // 开方根 sqrt()
//
//// 质数（素数）- prime 
//// 是质素返回1，不是返回0
//int prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	// 打印100~200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}

//*******************整型有序数组二分查找************************************************

//#include <stdio.h>
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入要查找的数：");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", ret);
//	}
//	return 0;
//}

// *******************链式访问*************************

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	// printf的返回值是打印出的字符个数
//	return 0;
//}