#define _CRT_SECURE_NO_WARNINGS 1

// 1. 函数介绍
// 1.1 strlen
// strlen
// string length
// 求字符串长度的，统计的是字符串中\0之前出现的字符个数
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc\0def";
//	char arr3[] = { 'a', 'b', 'c' };
//	printf("%zu\n", strlen(arr1));
//	printf("%zu\n", strlen(arr2));
//	printf("%zu\n", strlen(arr3));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//// strlen函数的返回类型为size_t 无符号整型
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	const char* start = str;
//	const char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


// 1.2 strcpy
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[10] = "xxxxxxxxx";
//	char arr2[10] = "xxxxxxxxx";
//	const char* p = "abcdef";
//	char arr3[] = { 'b', 'i','\0', 't' };
//	strcpy(arr1, p);
//	strcpy(arr2, arr3);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[3] = {0};
//	char arr2[] = "abcdef";
//	strcpy(arr, arr2);// err
//	printf("%s\n", arr);
//	return 0;
//}


//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest,char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] =   "hello world";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


// 1.3 strcat
//#include <stdio.h>
//#include <string.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	//1.找目标空间中的\0
//	while (*ret != '\0')
//	{
//		ret++;
//	}
//	//2.拷贝源头数据到\0之后的空间
//	while (*ret++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	// strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}


// 1.4 strcmp
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char arr1[] = "abcedf";
//	char arr2[] = "abq";
//
//	//char arr1[] = "abcd";
//	//char arr2[] = "abc";
//
//	//char arr1[] = "abc";
//	//char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("arr1<arr2\n");
//	else if(ret > 0)
//		printf("arr1>arr2\n");
//	else
//		printf("arr1=arr2\n");
//
//	printf("%d\n", ret);
//	return 0;
//}


// 1.5 strncpy
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "xxxx";
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}



// 1.6 strncat
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = "abcdef\0qqqqq";
//	char arr2[] = "xyz";
//	strncat(arr1, arr2, 2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abc";
//	strncat(arr1, arr1, 3);
//	printf("%s\n", arr1);
//
//	return 0;
//}



// 1.7 strncmp
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int ret = strncmp("abcdef", "abc", 4);
//	printf("%d\n", ret);
//
//	return 0;
//}



// 1.8 strstr
#include <stdio.h>
#include <string.h>
// 暴力求解
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	if (*str2 == '\0')
	{
		return str1;
	}
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)p;//找到了
		}
		p++;
	}
	return NULL;//找不到子串
}
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "cde";

	// char* p = strstr(arr1, arr2);
	char* p = my_strstr(arr1, arr2);
	if (p == NULL)
	{
		printf("不存在\n");
	}
	else
	{
		printf("%s\n", p);
	}
	return 0;
}