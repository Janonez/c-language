#define _CRT_SECURE_NO_WARNINGS 1

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N)
//#include <stdio.h>
//void find_num_in_young(int arr[3][3], int k, int* px, int* py)
//{
//	int i = 0;
//	int j = *py - 1;
//	int flag = 0;
//	while (i < *px && j >= 0)
//	{
//		if (arr[i][j] < k)
//			i++;
//		else if (arr[i][j] > k)
//			j--;
//		else
//		{
//			flag = 1;
//			*px = i;
//			*py = j;
//			break;
//		}	
//	}
//	if (flag == 0)
//	{
//		*px = -1;
//		*py = -1;
//	}
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	find_num_in_young(arr, k, &x, &y);
//	if (x == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标为%d %d\n", x, y);
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		int tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);
//	reverse(arr+k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdefghi";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include <stdio.h>
#include <string.h>
//int is_left_move(char s1[], char s2[])
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = s1[0];
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			s1[j] = s1[j + 1];
//		}
//		s1[len - 1] = tmp;
//		if (s1 == s2)
//			return 1;
//	}
//	return 0;
//}
int is_left_move(char s1[], char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (s1 != s2)
		return 0;
	strncat(s1, s1, len1);
	char* ret = strstr(s1, s2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	int ret = is_left_move(s1, s2);
	if (ret = 1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}