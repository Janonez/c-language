#define _CRT_SECURE_NO_WARNINGS 1

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