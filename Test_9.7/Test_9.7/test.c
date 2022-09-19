#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

// 冒泡排序
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 5,8,4,2,6,1,9,7,3 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// 数组交换
//#include <stdio.h>
//
//int main()
//{
//	int a[] = { 1,3,5,7,9 };
//	int b[] = { 2,4,6,8,0 };
//	int temp = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", b[i]);
//	}
//	return 0;
//}

//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
//#include <stdio.h>
//
//int count_bit(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//

//int count_bit(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = count_bit(n);
//	printf("%d", num);
//	return 0;
//}



//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

#include <stdio.h>

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

int count_diff_bit(int m, int n)
{
	// 按位异或 ^ 相同为0，不同为1
	int ret = m ^ n;
	int count = 0;
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int num = count_diff_bit(m, n);
	printf("%d", num);
	return 0;
}