#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

// ��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

//Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

//int DigitSum(int num)
//{
//	if (num < 10)
//		return num;
//	else
//		return DigitSum(num / 10) + num % 10;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("%d", sum);
//	return 0;
//}

//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//#include <stdio.h>
//#include <string.h>
//// strlen �⺯�������ַ������ȣ���ע\0
//// sizeof ������ ��������ռ���ڴ��С����λ�ֽ�
////void reverse_string(char* arr)
////{
////	int len = strlen(arr);
////	int left = 0;
////	int right = len - 1;
////	while (left < right)
////	{
////		char temp = arr[left];// arr[left] == *(arr + left)
////		arr[left] = arr[right];
////		arr[right] = temp;
////		left++;
////		right--;
////	}
////}
//
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//#include <stdio.h>
//
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr)
//{
//	int len = my_strlen(arr);
//	char temp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (my_strlen(arr + 1) > 1)
//	{
//		reverse_string(arr + 1);
//	}
//	*(arr + len - 1) = temp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

// strlen��ģ�⣨�ݹ�ʵ�֣�
#include <stdio.h>

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}


//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	return 1+my_strlen(arr+1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

// 

//#include <stdio.h>
//
//int main()
//{
//    int num = 0;
//    int i = 0;
//    scanf("%d", &num);
//    for (i = 1; i <= num; i++)
//    {
//        num += i;
//    }
//    printf("%d", num);
//    return 0;
//}

// 1 1 2 3 5 8 13 21 34 55 ...
//#include <stdio.h>
//
////int fib(int n)
////{
////	if (n > 2)
////		return fib(n - 1) + fib(n - 2);
////	else
////		return 1;
////}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

// ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//#include <stdio.h>
//
//int main()
//{
//	int a[] = { 1,3,5,7,9 };
//	int b[] = { 2,4,6,8,0 };
//	int temp = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	
//	return 0;
//}

//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�

#include <stdio.h>

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
		
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int temp = 0;
	while (left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr, sz);
	print(arr, sz);
	reverse(arr, sz);
	printf("\n");
	print(arr, sz);
	return 0;
}