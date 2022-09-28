#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	char* ps = "abcedf";
//	// ps中存的是abcdef中a的地址（首元素地址）
//	printf("%s\n", ps);// 知道首元素地址%s可以打印整个数组
//	// *ps 解引用 打印出字符a，说明存放首元素地址
//	printf("%c\n", *ps);
//	return 0;
//}


// 指针数组 - 存放指针的数组
// char*
// int *
// char**


//int main()
//{
//	// 存放指针的数组
//	char* arr1[4];
//	int* arr2[6];
//	return 0;
//}


// 数组指针
// 字符指针 - 指向字符的指针
// char*
// 整型指针 - 指向整型的指针
// int*
// 数组指针 - 指向数组的指针


//int main()
//{
//	int num = 10;
//	int* p = &num;
//
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;// &arr,取出arr数组的地址，存到数组中
//	// int(*)[10]
//	// pa就是一个数组指针变量
//
//	int* p2 = arr;// 首元素地址。相当于&arr[0]
//	return 0;
//}


// 函数指针 - 指向函数的指针

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

//函数指针数组
//

//int main()
//{
//	//函数指针数组
//	int (*pfArr[5])(int, int);
//	
//	//p3是一个指向【函数指针数组】的指针
//	int (* (*p3)[5])(int, int) = &pfArr;
//
//	return 0;
//}


//使用函数指针实现回调函数



//一维数组
//关于数组名
//数组名是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &数组名 - 数组名也表示整个数组，取出的是整个数组的地址
//除了这个2个例外，你见到的所有的数组名都表示首元素的地址
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	int* p = a;       // 整型指针
//	int (*pa)[4] = &a;// 数组指针
//	printf("%p\n", p);    // 000000A5E4CFFB28
//	printf("%p\n", p+1);  // 000000A5E4CFFB2C
//	
//	printf("%p\n", pa);   // 000000A5E4CFFB28
//	printf("%p\n", pa+1); // 000000A5E4CFFB38
//	// 类型不同+1 步长也不同	
//	// a  - int*
//	// &a - int (*)[4]
//	printf("%d\n", sizeof(a));// 16 a作为数组名单独放在sizeof内部表示整个数组，计算的是整个数组的大小
//	printf("%d\n", sizeof(a + 0));// 4/8 在这里a代表首元素地址，a+0还是首元素地址，地址在32位与64位环境中所占字节不同
//	printf("%d\n", sizeof(*a));// 4 a不单独使用就是首元素地址，*a就是首元素的大小 4个字节
//	printf("%d\n", sizeof(a + 1));// 4/8 a是首元素的地址,a+1是第二个元素的地址，sizeof(a+1)计算的是指针的大小
//	printf("%d\n", sizeof(a[1]));// 4 a[1]是第二个元素，整型大小4个字节
//	printf("%d\n", sizeof(&a));// 4/8 &a取出的数组的地址，数组的地址，也是地址呀，sizeof(&a)就是 4/8 个字节
//	printf("%d\n", sizeof(*&a));// 16 &a取出数组的地址，是数组指针类型，*&a是都数组指针解引用，访问一个数组的大小
//	printf("%d\n", sizeof(&a + 1));// 4/8 &a取出数组的地址，&a+1跨过一个数组的字节，还是地址
//	printf("%d\n", sizeof(&a[0]));// 4/8 a[0]是第一个元素，&a[0]取出它的地址，还是地址
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8 &a[0]是第一个元素的地址，&a[0]+1就是第二个元素的地址
//	return 0;
//}


//字符数组

#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	// sizeof 是计算对象或者类型创建的对象所占内存空间的大小，单位是字节
	// sizeof 是操作符，不是函数
	printf("%d\n", sizeof(arr));// 6 - arr是数组名，而且单独放在sizeof内部，计算的是总数组大小，单位是字节
	printf("%d\n", sizeof(arr + 0));// 4/8 - arr是数组名，未单独使用，表示首元素地址，+0不变
	printf("%d\n", sizeof(*arr));// 1 - arr是首元素地址，*解引用，是地址中的内容，char类型
	printf("%d\n", sizeof(arr[1]));// 1 - arr[1]是数组第二个元素，计算的是地址中内容的大小
	printf("%d\n", sizeof(&arr));// 4/8 - &arr 取出的是数组地址
	printf("%d\n", sizeof(&arr + 1));// 4/8 - &arr + 1 表示的是跨过整个数组地址
	printf("%d\n", sizeof(&arr[0] + 1));// 4/8 - &arr[0] + 1 取出数组第一个元素的地址再+1，表示数组第二个元素地址
	
	// strlen 是求字符串长度的库函数，从数组首元素开始，直到遇到\0才停止计算
	printf("%d\n", strlen(arr));// 随机值 - arr为数组首元素地址，数组中无\0
	printf("%d\n", strlen(arr + 0));// 随机值 - arr + 0 为首元素地址
	printf("%d\n", strlen(*arr));// 错误 - arr是首元素地址，*arr得到字符'a' -> 97 strlen 把'a'的ASCII码值 97 当成了地址
	printf("%d\n", strlen(arr[1]));// 错误 - 'b' -> 98 把98当成地址
	printf("%d\n", strlen(&arr));// 随机值 - &arr 数组地址
	printf("%d\n", strlen(&arr + 1));// 随机值 - &arr+1跳过整个数组
	printf("%d\n", strlen(&arr[0] + 1));// 随机值 - 得到数组第二个元素的地址
	return 0;
}
