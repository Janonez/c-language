#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a, b, c, tem = 0;
//	scanf("%d %d %d",&a, &b, &c);
//	if (a < b)
//	{
//		tem = b;
//		b = a;
//		a = tem;
//	}
//	if (a < c)
//	{
//		tem = c;
//		c = a;
//		a = tem;
//	}
//	if (b < c)
//	{
//		tem = c;
//		c = b;
//		b = tem;
//	}
//	
//	printf("%d %d %d",a, b, c);
//	return 0;
//}


//int main()
//{
//    int i, j = 0;
//    for (i = 99; i < 200; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//        if (j >= i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 999; year <= 2000; year++)
//	{
//		if (year % 10 == 0)
//		{
//			if (year % 400 == 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		else
//		{
//			if (year % 4 == 0)
//			{
//				printf("%d ", year);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, tem = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		tem = a;
//		a = b;
//		b = tem;
//	}
//	for (int i = b ; i > 0; i--)
//	{
//		
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d",i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = i; j <= 9; j++)
//		{
//			printf("%d * %d = %d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, max = 0;
//	// int arr[10] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	// scanf("%d",arr[10]);
//	for (i = 0; i < 10; i++)
//	{
//		
//			if (arr[i] > max)
//			{
//				max = arr[i];
//			
//			}
//		 
//	}
//	printf("%d ",max);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//控制行数
//	for (i = 1; i <= 9; i++)
//	{
//		//打印每一行内容，每行有i个表达式
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int n, i, j, tem2 = 0;
//	int tem = 1;
//	scanf("%d", &n);
//	/*for (j = 1; j <= n; j++)
//	{
//		tem = 1;
//		for (i = 1; i <= j; i++)
//		{
//			tem = tem * i;
//		}
//		tem2 = tem2 + tem;
//	}*/
//
//	for (i = 1; i <= n; i++)
//	{
//		tem = tem * i;
//		tem2 = tem2 + tem;
//
//	}
//	
//	printf("%d", tem2);
//	return 0;
//}

// 在有序数组中查找某个数字n
// 1 2 3 4 5 6 7 8 9 10
// 查找7
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int k = 0;
	scanf("%d", &k);

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}

	return 0;
}