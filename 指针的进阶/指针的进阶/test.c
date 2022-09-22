#define _CRT_SECURE_NO_WARNINGS 1



// 1.字符指针
//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w'; //常量字符串不可以修改
//	return 0;
//}

//int main()
//{
//	const char* pstr = "hello world."; 
//	// 本质是把字符串 hello worlf.首字符的地址放到了pstr中
//	printf("%s\n", pstr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";// 这里str3和str4指向的是一个同一个常量字符串，指向同一块内存
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

// 2.指针数组
//int main()
//{
//	/*char* arr[5] = { "abcdef","zhangsan","wangcai","hehe","ruhua" };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}*/
//
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[3] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//
//	char ch = 'w';
//	char* p2 = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	int(*p3)[10] = &arr;// 取出数组的地址放到p3中，p3是数组指针变量
//	// int(*)[10] -> 数组指针类型
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}


// 3.数组指针

//int main()
//{
//	int a = 10;
//	int*p1 = &a;
//
//	char ch = 'w';
//	char* p2 = &ch;
//
//	char arr[6] = {0};
//	char (*p3)[6] = &arr;
//
//	return 0;
//}

// 数组指针的使用

//void print1(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//void print1(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//}

//void print2(int(*arr)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*arr)[i]);
//	}
//	printf("\n");
//}

//void test1()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// print1(arr, sz);
//	print2(&arr, sz);
//}

//void print3(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print4(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//void test2()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	// print3(arr, 3, 5);
//	print4(arr, 3, 5);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

// 4.数组参数、指针参数
// 4.1一维数组传参
// 数组传参：形参可以是数组，也可以是指针
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

// 4.2二维数组传参
//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//err
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//err
//{}
//void test(int* arr[5])//err
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int** arr)//err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

// 4.3一级指针传参
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}
// 思考：当一个函数的参数部分为一级指针的时候，函数能接收什么参数？
//void test1(int* p)
//{}
////test1函数能接收什么参数？
//int a = 0;
//test(&a);
//
//int* ptr = &a;
//test(ptr);
//
//int arr[10];
//test(arr);


// 4.4 二级指针传参
//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
// 思考：当函数的参数为二级指针的时候，可以接收什么参数？
//void test(char** p)
//{ }
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//Ok?
//	return 0;
//}

// 5. 函数指针
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//
//	// Add 和 &Add都是函数的地址，没有区别
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//
//	// pf就是函数指针变量
//	// int (*pf)(int x,int y) = &Add;
//	int (*pf)(int x,int y) = Add;
//	// int sum = (*pf)(3, 5);
//	int sum = Add(3, 5);
//	printf("%d\n", sum);
//	return 0;
//}

//int test(const char* str, double d)
//{
//
//}
//
//int main()
//{
//	// int (*pt)(const char* str, double d) = &test;
//	int (*pt)(const char*, double) = &test;
//	return 0;
//}

//int main()
//{
//	(*(void (*) ())0)();
//	// 0 - int
//	// (void (*) ())0 - 把0强制转换成void (*)()的函数指针
//	// (*(void (*) ())0)() - 解引用，调用0地址的函数
//
//	void( *signal( int, void(*)(int) ) )(int);
//	// 上述代码是函数声明
//	// 声明的函数叫：signal
//	// signal函数的第一个参数是int类型
//	// signal函数的第二个参数是函数指针类型，该函数指针指向的函数参数是int，返回类型是void
//	// signal函数的返回类型也是函数指针类型，该函数指针指向的函数参数是int，返回类型是void
//
//	typedef void(*pf_t)(int);
//	pf_t signal(int, pf_t);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	return 0;
//}

// 6.函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	// 函数指针数组
//	// 可以存放多个 参数相同，返回类型相同 的函数的地址
//	int (*pfArr[2])(int, int) = { Add,Sub };
//
//	int ret = pfArr[0](2, 3);
//	printf("%d\n", ret);
//	ret = pfArr[1](2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

// 写一个计算器
//整数的加、减、乘、除
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***** 1.add    2. sub  ****\n");
//	printf("***** 3.mul    4. div  ****\n");
//	printf("***** 0.exit           ****\n");
//	printf("***************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:	
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}

//简化一下代码

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***** 1.add    2. sub  ****\n");
//	printf("***** 3.mul    4. div  ****\n");
//	printf("***** 0.exit           ****\n");
//	printf("***************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：->");
//		scanf("%d",&input);
//		//函数指针数组   - 转移表
//		int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入要操作的两个数:");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//			printf("选择错误\n");
//	} while (input);
//	return 0;
//}

// 7. 指向函数指针数组的指针
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针pfun
//	void (*pfun)(const char*) = test;
//	//函数指针的数组pfunArr
//	void (*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	//指向函数指针数组pfunArr的指针ppfunArr
//	void ( *( *ppfunArr )[5] )( const char* ) = &pfunArr;
//	return 0;
//}

// 8.回调函数
//#include <stdio.h>

//void menu()
//{
//	printf("******************************\n");
//	printf("******    1.Add  2.Sub   *****\n");
//	printf("******    3.Mul  4.Div   *****\n");
//	printf("******       0.exit      *****\n");
//	printf("******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入要计算的两个数:->");
//	scanf("%d %d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入数字选择：->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器");
//			break;
//		default:
//			printf("输入有误，请重新输入！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

// 冒泡排序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test1()
{
	// 冒泡排序
	// 对整型数组进行排序，升序排序
	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print(arr, sz);
}


//qsort 可以排序任意类型的数据
//void qsort(void* base, //待排序数据的起始地址
//	       size_t num,   //待排序数据的元素个数
//	       size_t size,  //待排序数据元素的大小（单位是字节）
//	       int (*cmp)(const void*, const void*) //比较2个元素大小的函数指针
//          );


//int cmp_int(const void* e1, const void* e2)
//{
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 < *(int*)e2)
//		return -1;
//	else
//		return 0;
//}
// 
// 简化
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2); // e1 - e2 升序，e2 -e1 降序
}

// 测试qsort函数排序整型数据
void test2()
{
	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

//  测试qsort函数排序结构体数据
struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test3()
{
	struct Stu s[] = { {"zhangsan",20}, {"lisi",50}, {"wangwu",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	// 按照名字排序
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	// 按照年龄排序
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort2(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}

void test4()
{
	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}


void test5()
{
	struct Stu s[] = { {"zhangsan", 20}, {"lisi", 55}, {"wangwu", 40} };
	//按照名字比较
	int sz = sizeof(s) / sizeof(s[0]);
	// bubble_sort2(s, sz, sizeof(s[0]), cmp_stu_by_name);
	bubble_sort2(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main()
{
	// test1();
	// test2();
	// test3();
	// test4();
	test5();
	return 0;
}