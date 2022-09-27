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


//关于数组名
//数组名是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名) - 数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &数组名 - 数组名也表示整个数组，取出的是整个数组的地址
//除了这个2个例外，你见到的所有的数组名都表示首元素的地址