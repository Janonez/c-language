#define _CRT_SECURE_NO_WARNINGS 1

// 1.结构体的声明
// 1.1 结构的声明
//struct tag
//{
//	member-list;
//}variable-list;
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}; //分号不能丢

// 1.2 特殊的声明
// 在声明结构的时候，可以不完全的声明。
// 匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;
// 上面的两个结构在声明的时候省略掉了结构体标签（tag）。
// 警告：编译器会把上面的两个声明当成完全不同的两个类型。所以是非法的。


// 1.3结构的自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//// 重新定义变量名
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


// 1.4 结构体变量的定义和初始化
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	int price;
//	char id[15];
//}sb3,sb4;
//// sb3,sb4是struct Book类型的结构体变量，是全局变量
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	// 局部变量
//	struct Book sb1;
//	struct Book sb2;
//	struct Stu ss1;
//	struct Stu ss2;
//	return 0;
//}


// struct Book
//{
//    char book_name[20];
//    char author[20];
//    int price;
//    char id[15];
//    struct Stu s;
//}sb3 = { "鹏哥C语言", "鹏哥", 88, "PG10001", {"lisi", 30, "20220101"}}, sb4;
//struct Book sb5;
//int main()
//{
//    //struct Book sb1 = {"《杭哥C++》", "杭哥", 88, "HG10001"};//局部变量
//    //struct Book sb2;//局部变量
//    printf("%s %s %d %s %s %d %s\n", sb3.book_name, sb3.author, 
//			sb3.price, sb3.id, sb3.s.name, sb3.s.age, sb3.s.id);
//    //struct Stu ss1;
//    //struct Stu ss2;
//    return 0;
//}



//struct S
//{
//    char c;
//    int a;
//    float f;
//};
//
//int main()
//{
//    struct S s = {'w', 10, 3.14f};
//    printf("%c %d %f\n", s.c, s.a, s.f);
//
//    struct S s2 = {.f = 3.14f, .c = 'w', .a = 10};
//    printf("%c %d %f\n", s2.c, s2.a, s2.f);
//
//    return 0;
//}


// 1.5结构体内存对齐
//#include <stdio.h>
//#include <stddef.h>
//struct S1 
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//	
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}


//练习4-结构体嵌套问题
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));// 16
//	printf("%d\n", sizeof(struct S4));// 32
//	return 0;
//}
// 首先得掌握结构体的对齐规则：
// 1. 第一个成员在与结构体变量偏移量为0的地址处。
// 2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
// 对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
// VS中默认的值为8
// 3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
// 4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整
// 体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。

//那在设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到：
//让占用空间小的成员尽量集中在一起。

//#include <stdio.h>
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	//输出的结果是什么？
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}


// 1.6 结构体传参
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //传结构体
//	print2(&s); //传地址
//	return 0;
//}
// 结构体传参的时候，要传结构体的地址。
// 函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
// 如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。



// 2.位段
//#include <stdio.h>

//struct S
//{
//	int a;
//	int b;
//	int c;
//	int d;
//};
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//struct C
//{
//	char _a : 3;
//	char _b : 4;
//	char _c : 5;
//	char _d : 4;
//
//};
//int main()
//{
//	printf("%d\n", sizeof(struct C));
//	//printf("%d\n", sizeof(struct A));
//	return 0;
//}


