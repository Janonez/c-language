#define _CRT_SECURE_NO_WARNINGS 1

// 1.模拟实现strlen
//#include <stdio.h>
// 计数器方式
//int my_strlen(const char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
// 递归方式
//int my_strlen(const char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
// 函数指针
//int my_strlen(const char* arr)
//{
//	char* p = arr;
//	while (*p != '\0')
//		p++;
//	return p - arr;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


// 2.模拟实现strcpy
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


// 3.模拟实现strcmp
//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(const char* s1, const char* s2)
//{
//	int ret = 0;
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("arr1 < arr2\n");
//	else if (ret > 0)
//		printf("arr1 > arr2\n");
//	else
//		printf("arr1 = arr2\n");
//	return 0;
//}


// 4.模拟实现strcat
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*ret != '\0')
//		ret++;
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
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}


// 5.模拟实现strstr
//#include <stdio.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while ( *s1 != '\0'&& *s2 != '\0' && * s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return p;
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbccdef";
//	char arr2[] = "bcd";
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


// 6.模拟实现memcpy
// void * memcpy ( void * des, const void * src, size_t num );
//#include <stdio.h>
//#include <assert.h>
//void* my_memcpy ( void * des, const void * src, size_t num )
//{
//	void* ret = des;
//	assert(des);
//	assert(src);
//	while (num--)
//	{
//		*(char*)des = *(char*)src;
//		des = (char*)des + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20]={0};
//	char arr2[20] = "Hello World";
//	printf("%s\n", my_memcpy(arr1, arr2, 11));
//	return 0;
//}


// 7.模拟实现memmove
// void * memmove ( void * destination, const void * source, size_t num )
#include <stdio.h>
#include <assert.h>
void* my_memmove(void* des, const void* src, size_t num)
{
	assert(des);
	assert(src);
	void* ret = des;
	if (des < src)
	{
		while (num--)
		{
			*(char*)des = *(char*)src;
			des = (char*)des + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)des + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr + 2, arr, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}