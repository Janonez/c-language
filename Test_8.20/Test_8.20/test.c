#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#define MAX 100
// 一个工程中可以有多个.c文件，但是多个.c文件中只能有一个main函数
//int main()
//{
//	// 1.字面常量 ==> 直接写出的量
//	/*
//	100
//	3.14
//	'a'
//	"abcde"
//	*/
//
//	// 2.const修饰的常变量
//	const int num = 10;
//	// num = 20; (报错，不允许修改)
//	printf("%d\n",num);
//
//	// 3.#define 定义的标识符常量
//	printf("%d\n",MAX);
//	// MAX = 200; ==> 报错
//
//	return 0;
//}

// 4.枚举常量
// 性别、血型、三原色
//enum Sex  // 枚举
//{
//	// 下面是enum Sex类型变量的可能取值，这三个可能取值就是枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};

//int main()
//{
//	enum Sex s = MALE;// 性别
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}

// 4.字符串
//int main()
//{
//	printf("hello world.\n");
//	// \0 转义字符，字符串的结束标志，不算做内容
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//
//	// strlen 是库函数<string.h>，是专门求字符串长的函数
//	// string length
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//}

// '\' ==> 转义字符 

/*
    \? \' \" \\ 表示原来的含义
    \a ==> 警告，蜂鸣 \b ==> 退格 \f ==> 进纸符
    \n ==> 换行 \r ==> 回车 \t ==> tab \v ==>
    \ddd ==> 表示1~3个八进制数字 例如：\130
    \xdd ==> 表示2个十六进制数字 例如：\x40
*/

//int main()
//{
//	printf("c:\test\test.c\n");
//	printf("%s\n", "abc");
//	printf("%c\n", '\'');
//	printf("\a\a\a\a");
//	printf("b\vc\td");
//	return 0;
//}

    //%d ==> 打印整型
    //%s ==> 打印字符串
    //%c ==> 打印字符


// 面试题
// printf("%d\n",strlen("c:\test\628\test.c")); ==> 14

//#include <stdio.h>
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数：\n");
//	scanf("%d %d",&a, &b);
//	int max = a > b ? a : b;
//	printf("两个整数中，较大的为：%d",max);
//	return 0;
//}

#include <stdio.h>
int main()
{
    int IQ = 0;
    while (scanf("%d", &IQ))
    {
        if (IQ >= 140)
        {
            printf("Genius\n");
        }
    }
    return 0;
}