#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

// �Ż�
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	*dest = *src;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//assert(dest != NULL);// ����
//	//assert(src != NULL);// ����
//
//	//assert(dest);// ����
//	//assert(src);// ����
//
//	assert(dest && src);// ����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//	return ret; // �������ص���Ŀ��ռ����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}

// const����ָ�룬����*����ߣ���ʾ����ָ��ָ������ݲ���ͨ��ָ�����޸ģ�����ָ�����������޸�
// *p = 0;//err
// p = &ret;//ok

// const����ָ�룬����*���ұߣ���ʾ����ָ������������޸ģ�����ָ��ָ������ݿ���ͨ��ָ�����޸�
// p = &ret;//err
// *p = 0;//ok


//int main()
//{
//	const int num = 10;
//	//num = 20;//err
//	int ret = 100;
//
//	const int * p = &num;
//	//*p = 20;
//	//p = &ret;
//
//	printf("%d\n", num);
//	printf("%d\n", *p);
//
//
//	return 0;
//}
//
//
//
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


