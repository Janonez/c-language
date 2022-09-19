#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 0;
//	b = a = a + 10;
//	a >>= 1;
//	printf("%d", a);
//	return 0;
//}

// 逻辑反操作
//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

// &
//int main()
//{
//	int a = 10;// 四个字节
//	char b = 0;// 一个字节
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	int* pa = &a;// & 取地址操作符
//	*pa = 20;// * 解引用操作符
//	return 0;
//}

// sizeof()
//int main()
//{
//	int a = 10;
//	char b = 0;
//	int* c;
//	int arr[10];
//	printf("%zu\n", sizeof(a));
//	printf("%zu\n", sizeof(b));
//	printf("%zu\n", sizeof(c));
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(int*));
//	return 0;
//}

//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    // i = a++ && ++b && d++;
//    i = a++||++b||d++;
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}

struct Book
{
	char name[20];
	int price;
};

int main()
{
	struct Book sb = { "活着", 20 };
	printf("%s %d\n", sb.name, sb.price);
	struct Book* ps = &sb;
	printf("%s %d\n", ps->name, ps->price);
	printf("%s %d\n", (*ps).name, (*ps).price);
	return 0;
}