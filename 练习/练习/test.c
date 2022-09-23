#define _CRT_SECURE_NO_WARNINGS 1

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。
//#include <stdio.h>
//int main()
//{
//	int money = 20;
//	int price = 1;
//	int sum = money / price;
//	int bottle = sum;
//	int tmp = 0;
//	while (bottle / 2 != 0)
//	{
//		tmp = bottle;
//		bottle = bottle / 2;
//		sum += bottle;
//		bottle = tmp % 2 + bottle;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


// 变种水仙花数
// Lily Number：把任意的数字,从中间拆分成两个数字,如果所有拆分后的乘积之和等于自身
// 655 = 6 * 55 + 65 * 5
// 1461 = 1 * 461 + 14 * 61 + 146 * 1
// 求出5位数中的所有 Lily Number。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	
//	// 1234 5
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int ret = 0;
//		ret = i;
//		sum += (ret / 10) * (ret % 10) + (ret / 100) * (ret % 100) + 
//			(ret / 1000) * (ret % 1000) + (ret / 10000) * (ret % 10000);
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


// 程序死循环解释
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//调整数组使奇数全部都位于偶数前面。
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#include <stdio.h>
//void swap_odd_even(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - i; j++)
//		{
//			if (arr[i] % 2 == 0)
//			{
//				tmp = arr[i];
//				arr[i] = arr[1+i];
//				arr[1 + i] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	swap_odd_even(arr, 10);
//	return 0;
//}

int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("%d %d", a + b, c);
	return 0;
}