#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//// 外部函数声明
//extern int add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

// __FILE__ //进行编译的源文件
// __LINE__ //文件当前的行号
// __DATE__ //文件被编译的日期
// __TIME__ //文件被编译的时间
// __STDC__ //如果编译器遵循ANSI C，其值为1，否则未定义
#include <stdlib.h>
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__); 
//	printf("%s\n", __TIME__);
//	// printf("%d\n", __STDC__);
//
//	system("pause");
//	return 0;
//}

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int m = Max(a, b);
//	int m = MAX(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//#define SQUARE(X) ((X) * (X))
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	printf("%d\n", SQUARE(5+1));
//	//printf("%d\n", 5+1*5+1);
//	//printf("%d\n", DOUBLE(6));//12
//	//printf("%d\n", DOUBLE(6+1));//14
//	printf("%d\n", 10*DOUBLE(6));
//
//	return 0;
//}

//#define M 10
//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int m = MAX(2 + 3, M);
//	printf("%d\n", m);
//	printf("hello M");
//	return 0;
//}


//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//
//	return 0;
//}
//

//#define PRINT(val, format)  printf("the value of "#val" is "format"\n", val)
//int main()
//{
//	int a = 10;
//	PRINT(a, "%d");
//	//printf("the value of a is %d\n", a);
//
//	int b = 20;
//	PRINT(b, "%d");
//	//printf("the value of b is %d\n", b);
//
//	float f = 3.5f;
//	PRINT(f, "%f");
//	//printf("the value of f is %f\n", f);
//
//	return 0;
//}

//#define CAT(A,B)  A##B
//
//int main()
//{
//	int Class107 = 100;
//
//	printf("%d\n", CAT(Class, 107));
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = a + 1;//b=2,a=1
//
//	int a = 1;
//	int b = ++a;//b=2,a=2
//
//	int ch = getchar();//
//
//	fgetc();
//
//	return 0;
//}

//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int m = MAX(++a, ++b);
//
//	int m = ((++a) > (++b) ? (++a) : (++b));
//	printf("m = %d a=%d b=%d\n", m, a, b);
//
//	return 0;
//}


