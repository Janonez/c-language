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