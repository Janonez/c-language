#define _CRT_SECURE_NO_WARNINGS 1

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int sum = money;
//	int bottle = sum;
//	while (bottle >= 2)
//	{
//		sum += bottle / 2;
//		bottle = bottle % 2 + bottle / 2;
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
//#include <math.h>
//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int j = 0;
//        int sum = 0;
//        for (j = 1; j <= 4; j++)
//        {
//            int ret = (int)pow(10, j);
//            sum += (i / ret) * (i % ret);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
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
//#include <stdio.h>
//void swap_odd_even(int arr[], int sz)
//{
//	int tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	swap_odd_even(arr, sz);
//	print(arr, sz);
//	return 0;
//}


// 模拟实现库函数strcpy
//#include <stdio.h>
//#include <assert.h>
//void my_strcpy(char arr1[], char arr2[])
//{
//	assert(arr1 && arr2);
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = "Hello World";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


// 模拟实现库函数strlen
//#include <stdio.h>
//int my_strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "Hello World";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

// 输入一个整数序列，判断是否是有序序列，
// 有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
// 数据范围：3≤n≤50  序列中的值都满足 1≤val≤100
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	int flag1 = 0;// 判断是否为升序
//	int flag2 = 0;// 判断是否为降序
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] < arr[i - 1])
//				flag1 = 1;
//			else if (arr[i] > arr[i - 1])
//				flag2 = 1;
//		}
//	}
//	if (flag1 + flag2 <= 1)
//		printf("sorted");
//	else
//		printf("unsorted");
//	return 0;
//}


// 输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int max = 0;
//    int min = 100;
//    int score = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score);
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//    }
//    printf("%d\n", max - min);
//    return 0;
//}


// 输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
// 数据范围：1≤n, m≤1000，序列中的值满足 0≤val≤30000
// 输入描述：
// 输入包含三行
// 第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，
// m表示第三行第二个升序序列中数字的个数。
// 第二行包含n个整数，用空格分隔。
// 第三行包含m个整数，用空格分隔。
// 输出描述：
// 输出为一行，输出长度为n + m的升序序列，
// 即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。

// 合并为一个数组，冒泡排序
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int arr1[1000];
//	int arr2[1000];
//	int arr3[1000];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//		arr3[i] = arr1[i];
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//		arr3[i + n] = arr2[i];
//	}
//	// 冒泡排序
//	for (i = 0; i < m + n; i++)
//	{
//		for (j = 0; j < m + n - 1 - i; j++)
//		{
//			if (arr3[j] > arr3[j + 1])
//			{
//				int tmp = arr3[j];
//				arr3[j] = arr3[j + 1];
//				arr3[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}

// 比较两数组大小直接打印
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int arr1[1000];
//	int arr2[1000];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	i = 0; j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] > arr2[j])
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//	}
//	if (i == n)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else
//	{
//		for (; i < n; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}


// KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                {
//                    printf("*");
//                }
//                else if (i + j == n - 1)
//                {
//                    printf("*");
//                }
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


// KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的箭形图案。
#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        int j = 0;
        // 上半部分
        for (i = 0; i < n; i++)
        {
            // 打印空格
            for (j = 0; j < n - i; j++)
            {
                printf("  ");
            }
            // 打印*
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        // 下半部分
        for (i = 0; i < n + 1; i++)
        {
            for (j = 0; j < i; j++)
            {
                printf("  ");
            }
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}