#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	char* ps = "abcedf";
//	// ps�д����abcdef��a�ĵ�ַ����Ԫ�ص�ַ��
//	printf("%s\n", ps);// ֪����Ԫ�ص�ַ%s���Դ�ӡ��������
//	// *ps ������ ��ӡ���ַ�a��˵�������Ԫ�ص�ַ
//	printf("%c\n", *ps);
//	return 0;
//}


// ָ������ - ���ָ�������
// char*
// int *
// char**


//int main()
//{
//	// ���ָ�������
//	char* arr1[4];
//	int* arr2[6];
//	return 0;
//}


// ����ָ��
// �ַ�ָ�� - ָ���ַ���ָ��
// char*
// ����ָ�� - ָ�����͵�ָ��
// int*
// ����ָ�� - ָ�������ָ��


//int main()
//{
//	int num = 10;
//	int* p = &num;
//
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;// &arr,ȡ��arr����ĵ�ַ���浽������
//	// int(*)[10]
//	// pa����һ������ָ�����
//
//	int* p2 = arr;// ��Ԫ�ص�ַ���൱��&arr[0]
//	return 0;
//}


// ����ָ�� - ָ������ָ��

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = Add;
//	// int sum = (*pf)(3, 5);
//	int sum = pf(3, 5);
//	printf("%d\n", sum);
//	return 0;
//}

//����ָ������
//

//int main()
//{
//	//����ָ������
//	int (*pfArr[5])(int, int);
//	
//	//p3��һ��ָ�򡾺���ָ�����顿��ָ��
//	int (* (*p3)[5])(int, int) = &pfArr;
//
//	return 0;
//}


//ʹ�ú���ָ��ʵ�ֻص�����



//һά����
//����������
//��������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������) - ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2. &������ - ������Ҳ��ʾ�������飬ȡ��������������ĵ�ַ
//�������2�����⣬����������е�����������ʾ��Ԫ�صĵ�ַ
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	int* p = a;       // ����ָ��
//	int (*pa)[4] = &a;// ����ָ��
//	printf("%p\n", p);    // 000000A5E4CFFB28
//	printf("%p\n", p+1);  // 000000A5E4CFFB2C
//	
//	printf("%p\n", pa);   // 000000A5E4CFFB28
//	printf("%p\n", pa+1); // 000000A5E4CFFB38
//	// ���Ͳ�ͬ+1 ����Ҳ��ͬ	
//	// a  - int*
//	// &a - int (*)[4]
//	printf("%d\n", sizeof(a));// 16 a��Ϊ��������������sizeof�ڲ���ʾ�������飬���������������Ĵ�С
//	printf("%d\n", sizeof(a + 0));// 4/8 ������a������Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����ַ��32λ��64λ��������ռ�ֽڲ�ͬ
//	printf("%d\n", sizeof(*a));// 4 a������ʹ�þ�����Ԫ�ص�ַ��*a������Ԫ�صĴ�С 4���ֽ�
//	printf("%d\n", sizeof(a + 1));// 4/8 a����Ԫ�صĵ�ַ,a+1�ǵڶ���Ԫ�صĵ�ַ��sizeof(a+1)�������ָ��Ĵ�С
//	printf("%d\n", sizeof(a[1]));// 4 a[1]�ǵڶ���Ԫ�أ����ʹ�С4���ֽ�
//	printf("%d\n", sizeof(&a));// 4/8 &aȡ��������ĵ�ַ������ĵ�ַ��Ҳ�ǵ�ַѽ��sizeof(&a)���� 4/8 ���ֽ�
//	printf("%d\n", sizeof(*&a));// 16 &aȡ������ĵ�ַ��������ָ�����ͣ�*&a�Ƕ�����ָ������ã�����һ������Ĵ�С
//	printf("%d\n", sizeof(&a + 1));// 4/8 &aȡ������ĵ�ַ��&a+1���һ��������ֽڣ����ǵ�ַ
//	printf("%d\n", sizeof(&a[0]));// 4/8 a[0]�ǵ�һ��Ԫ�أ�&a[0]ȡ�����ĵ�ַ�����ǵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ��&a[0]+1���ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}


//�ַ�����

#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	// sizeof �Ǽ������������ʹ����Ķ�����ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
	// sizeof �ǲ����������Ǻ���
	printf("%d\n", sizeof(arr));// 6 - arr�������������ҵ�������sizeof�ڲ�����������������С����λ���ֽ�
	printf("%d\n", sizeof(arr + 0));// 4/8 - arr����������δ����ʹ�ã���ʾ��Ԫ�ص�ַ��+0����
	printf("%d\n", sizeof(*arr));// 1 - arr����Ԫ�ص�ַ��*�����ã��ǵ�ַ�е����ݣ�char����
	printf("%d\n", sizeof(arr[1]));// 1 - arr[1]������ڶ���Ԫ�أ�������ǵ�ַ�����ݵĴ�С
	printf("%d\n", sizeof(&arr));// 4/8 - &arr ȡ�����������ַ
	printf("%d\n", sizeof(&arr + 1));// 4/8 - &arr + 1 ��ʾ���ǿ�����������ַ
	printf("%d\n", sizeof(&arr[0] + 1));// 4/8 - &arr[0] + 1 ȡ�������һ��Ԫ�صĵ�ַ��+1����ʾ����ڶ���Ԫ�ص�ַ
	
	// strlen �����ַ������ȵĿ⺯������������Ԫ�ؿ�ʼ��ֱ������\0��ֹͣ����
	printf("%d\n", strlen(arr));// ���ֵ - arrΪ������Ԫ�ص�ַ����������\0
	printf("%d\n", strlen(arr + 0));// ���ֵ - arr + 0 Ϊ��Ԫ�ص�ַ
	printf("%d\n", strlen(*arr));// ���� - arr����Ԫ�ص�ַ��*arr�õ��ַ�'a' -> 97 strlen ��'a'��ASCII��ֵ 97 �����˵�ַ
	printf("%d\n", strlen(arr[1]));// ���� - 'b' -> 98 ��98���ɵ�ַ
	printf("%d\n", strlen(&arr));// ���ֵ - &arr �����ַ
	printf("%d\n", strlen(&arr + 1));// ���ֵ - &arr+1������������
	printf("%d\n", strlen(&arr[0] + 1));// ���ֵ - �õ�����ڶ���Ԫ�صĵ�ַ
	return 0;
}


#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "abcdef";

	printf("%d\n", sizeof(arr));// 7 - arr��sizeof�ڵ���ʹ�ã���ʾ�������飬����\0
	printf("%d\n", sizeof(arr + 0));// 4/8 - ��Ԫ�ص�ַ
	printf("%d\n", sizeof(*arr));// 1 - *arr�õ������ַ�a��char����
	printf("%d\n", sizeof(arr[1]));// 1 - arr[1]��ʾ����ڶ���Ԫ��
	printf("%d\n", sizeof(&arr));// 4/8 - ȡ�����������ַ
	printf("%d\n", sizeof(&arr + 1));// 4/8 - ȡ�������ַ��������������
	printf("%d\n", sizeof(&arr[0] + 1));// 4/8 - �ڶ���Ԫ�ص�ַ

	printf("%d\n", strlen(arr));// 6 - ��Ԫ�ص�ַ��ֱ��\0ֹͣ
	printf("%d\n", strlen(arr + 0));// 6 - ��Ԫ�ص�ַ��ֱ��\0ֹͣ
	printf("%d\n", strlen(*arr));// err
	printf("%d\n", strlen(arr[1]));// err
	printf("%d\n", strlen(&arr));// 6 - ���������ַ
	printf("%d\n", strlen(&arr + 1));// ���ֵ - ���������ĵ�ַ
	printf("%d\n", strlen(&arr[0] + 1));// 5 - ����ڶ���Ԫ�ص�ַ
	return 0;
}

int main()
{
	const char* p = "abcdef";

	printf("%zu\n", sizeof(p));// 4/8 - p��ŵ�������ĵ�ַ�������ϵĵ�ַ
	printf("%zu\n", sizeof(p + 1));// 4/8 - �����ַ��һλ����Ϊ��char���͵�����
	printf("%zu\n", sizeof(*p));// 1 - char*���ͣ�������ֻ�ܷ���һ���ֽ�
	printf("%zu\n", sizeof(p[0]));// 1 - �����һ��Ԫ��
	printf("%zu\n", sizeof(&p));// 4/8 - ȡ��ָ��p�ĵ�ַ
	printf("%zu\n", sizeof(&p + 1));// 4/8 - pָ��ĵ�ַ����ƶ�һ������Ĵ�С
	printf("%zu\n", sizeof(&p[0] + 1));// 4/8 - p[0]��Ԫ�أ�&p[0]+1��ʾ�ڶ���Ԫ�ص�ַ

	printf("%d\n", strlen(p));// 6 - p��ĵ�ַ����������Ԫ�ص�ַ
	printf("%d\n", strlen(p + 1));// 5 - p��ĵ�ַ����ƶ�һ���ֽڣ�����ڶ������ݵĵ�ַ
	printf("%d\n", strlen(*p));// err
	printf("%d\n", strlen(p[0]));// err
	printf("%d\n", strlen(&p));// ���ֵ - &p��ȡ��p�ĵ�ַ�����������
	printf("%d\n", strlen(&p + 1));// ���ֵ - ������ĵ�ַ
	printf("%d\n", strlen(&p[0] + 1));// 5 - &p[0]+1,ȡ����һ��Ԫ�ص�ַ����һΪ�ڶ���Ԫ�ص�ַ
	return 0;
}

