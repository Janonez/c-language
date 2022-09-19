#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	char ch;
//	int* pa = &a;
//	*pa = 20; // 解引用操作符（间接访问操作符）
//	printf("%d\n", a);
//	char* pc = &ch;
//
//	printf("%zd\n", sizeof(pa));
//	printf("%zd\n", sizeof(pc));
//	// 格式字符串“%d”需要类型“int”的参数，但可变参数 1 拥有了类型“size_t”
//	// 请考虑在格式字符串中使用“%zd”
//	// siezod(pa) sizeof(pc) 计算的是指针变量在内存中占用大小，64位8字节
//
//	printf("%p\n", &a);// %p 打印地址
//	return 0;
//}


// 指针类型决定了：指针解引用操作的时候，访问几个字节（权限）
// char*   的指针 解引用访问1个字节
// int*    的指针 解引用访问4个字节
// double* 的指针 解引用访问8个字节



//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%zd\n", sizeof(pa));
//	printf("%zd\n", sizeof(pc));
//	printf("%zd\n", sizeof(pf));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;// 错误的
//
//	printf("pa=%p\n", pa);
//	printf("pc=%p\n", pc);
//
//	printf("pa+1=%p\n", pa+1);
//	printf("pc+1=%p\n", pc+1);
//
//	// 指针类型决定了指针的步长
//	// int*    ：指针+1，意思是跳过一个整型，也就是向后走4个字节
//	// char*   ：指针+1，意思是跳过一个字符，也就是向后走1个字节
//	// double* ：指针+1，意思是跳过一个浮点，也就是向后走8个字节
//	// cshort* ：指针+1，意思是跳过一个短整型，也就是向后走2个字节
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr; // 数组名就是数组首元素地址arr->&arr[0]
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	//int* p; // 局部变量中未初始化，p就是野指针
//	//*p = 20;
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//// 指针指向的空间释放--野指针
//int* test()
//{
//	int num = 100;
//	return &num;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 200;
//	return 0;
//}

//int main()
//{
//	jint a = 10;
//	int* pa = &a;
//	int* p = NULL;// NULL <-> 0初始化指针
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	double arr[5] = {0};
//	double* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%lf ", *(p + i));
//	}
//
//	return 0;
//}
//
// 
// 
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;// 全局变量，默认为0

//int main()
//{
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 1;
//	}
//	return 0;
//}

//int main()
//{
//	//两个指针相减的前提是：指针指向的同一块连续的空间
//	int arr[10] = {0};
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	int a = 10;
//	char c = 'w';
//	printf("%d\n", &a - &c);//错误
//
//	return 0;
//}



#include <string.h>

// 1. 计数器
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2. 递归的版本

//3. 指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//		str++;
//	return str - start;
//}

//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

// 二级指针
//int main()
//{
//	int a = 10;
//	int* p = &a;// p是指针变量，一级指针变量
//	int** pp = &p;// pp是二级指针变量
//	*p = 200;
//	**pp = 2000;
//	printf("%d\n", a);
//	return 0;
//}

// 指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int e = 50;
//	int* arr[5] = { &a,&b,&c,&d,&e };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	// 用一维数组模拟二维数组
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,6,7,8 };
//
//	int* arr[4] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	int j = 0;
//	/*for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 写一个函数打印arr数组的内容，不使用数组下标，使用指针。
// arr是一个整形一维数组。写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//#include <stdio.h>
//
//void print(int* arr, int sz)
//{
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-1-i) -1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = 0;
//		tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp%10,n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[100];
//    gets(arr);
//    int sz = strlen(arr);
//    int i = 0;
//    int left = 0;
//    int right = sz - 1;
//    char tmp = 0;
//    while (left < right)
//    {
//        tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] == ' ' || arr[i] == '\0')
//        {
//            left = 0;
//            right = i - 1;
//            while (left < right)
//            {
//                tmp = arr[left];
//                arr[left] = arr[right];
//                arr[right] = tmp;
//                left++;
//                right--;
//            }
//        }
//    }
//    printf("%s\n", arr);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int year = 1009;
//	int* p = &year;
//	printf("%d %d\n", year, p);
//	*p++;
//	printf("%d %d\n", year, p);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[101];
//	gets(arr);
//	char* cur = arr;
//	while (*cur)
//	{
//		char* start = cur;
//		char* end = cur;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			cur = end + 1;
//		else
//			cur = end;
//	}
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	printf("%s\n", arr);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int i = 1;
//    int n = 1;
//    int min = a > b ? b : a;
//    
//    for (i = 1; i <= min; i++)
//    {
//        if (a % i == 0 && b % i == 0 && i > n)
//        {
//           n  = i;
//        }
//    }
//    printf("%d\n", a * b / n);
//    return 0;
//}

//int gcd(int a, int b)// 最大公约数
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a * b / gcd(a, b));
//	return 0;
//}

