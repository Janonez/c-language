#define _CRT_SECURE_NO_WARNINGS 1

// 1. ��������
// 1.1 strlen
// strlen
// string length
// ���ַ������ȵģ�ͳ�Ƶ����ַ�����\0֮ǰ���ֵ��ַ�����
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
//// strlen�����ķ�������Ϊsize_t �޷�������
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <assert.h>
size_t my_strlen(const char* str)
{
	assert(str);
	const char* start = str;
	const char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}