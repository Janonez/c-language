#define _CRT_SECURE_NO_WARNINGS 1

/********************����һ������ӡ�˷�****************************/

/*
#include <stdio.h>

void mup(int x)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %2d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("������һ��������");
	scanf("%d", &n);
	mup(n);
	return 0;
}
*/

/**************************��ӡһ������ÿһλ*******************************/

/*
#include <stdio.h>

void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d ", x % 10);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
*/

/************************�׳�*******************************/

/*
#include <stdio.h>

int Fac1(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return (n * Fac1(n - 1));
	}
}

int Fac2(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac2(n);
	printf("%d", ret);
	return 0;
}
*/


/****************д���������ַ�������**************************/

#include <stdio.h>

// ��ͨ����
/*
int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
*/

// �ݹ飬��������ʱ����
/*
int my_strlen(char* arr)
{
	if (*arr != '\0')
		return (1 + my_strlen(arr + 1));
	else
		return 0;
}
int main()
{
	char arr[] = "abcde";
	int len = my_strlen(arr);
	printf("�ַ�������Ϊ��%d", len);
	return 0;
}
*/

/*************************���n��쳲�������************************/
// 1 1 2 3 5 8 13 21 34 55 ...
#include <stdio.h>

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d", ret);
	return 0;
}