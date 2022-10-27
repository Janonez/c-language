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
//
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
//#include <stdio.h>
//#include <string.h>
//// 暴力求解
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;//找到了
//		}
//		p++;
//	}
//	return NULL;//找不到子串
//}
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "cde";
//
//	// char* p = strstr(arr1, arr2);
//	char* p = my_strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", p);
//	}
//	return 0;
//}


// 1.9 strtok
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "906269785@qq.com";
//	char buf[20] = { 0 };
//	strcpy(buf, arr);
//	const char* p = "@.";
//	/*char* str = strtok(buf, p);
//	printf("%s\n", str);
//	str = strtok(NULL, p);
//	printf("%s\n", str);
//	str = strtok(NULL, p);
//	printf("%s\n", str);*/
//	// 简化代码
//	char* str = NULL;
//	for (str = strtok(buf, p); str != NULL; str = strtok(NULL, p))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}


// 1.10 strerror
// 把错误码转换成错误信息
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	//错误码记录到错误码的变量中
//	//errno - C语言提供的全局的错误变量
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");//打印的依然是errno变量中错误码对应的错误信息
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


// 字符分类函数：
#include <stdio.h>
#include <ctype.h>
//int main()
//{
//	char ch1 = 'a';
//	int ret = isdigit(ch1);
//	printf("%d\n", ret);
//
//	char ch2 = 'W';
//	//	//printf("%c\n", toupper(ch));//ch-32
//	printf("%c\n", tolower(ch2));//ch+32
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "Are you ok?";
//	char* p = arr;
//	while (*p)
//	{
//		if (islower(*p))
//		{
//			*p = toupper(*p);
//		}
//		p++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


// 1.11 memcpy
// 1.12 memmove
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 20);
//
//	float arr3[] = { 1.0f,2.0f,3.0f,4.0f,5.0f };
//	float arr4[20] = { 0 };
//	memcpy(arr4, arr3, 8);
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src,size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)ret = *(char*)src;
//		ret = (char*)ret + 1;
//		src = (char*)src + 1;
//	}
//	return dest;
//}
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)ret = *(char*)src;
//			ret = (char*)ret + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)ret+num) = *((char*)src+num);
//		}
//	}
//	return dest;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memcpy(arr1 + 2, arr1, 20);
//	my_memmove(arr1 + 2, arr1, 20);
//
//	/*int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr3[20] = { 0 };
//	my_memcpy(arr3, arr2, 20);*/
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	float arr3[] = { 1.0f,2.0f,3.0f,4.0f };
//	float arr4[5] = { 0.0 };
//	my_memcpy(arr4, arr3, 8);
//	return 0;
//}


// 1.13 memcmp
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,65536,4,5 };
//	printf("%d\n", memcmp(arr1, arr2, 12));
//	return 0;
//}