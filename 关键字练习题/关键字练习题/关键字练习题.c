#define _CRT_SECURE_NO_WARNINGS 1

//描述
//给定两个整数a和b(0 < a, b < 10, 000)，计算a除以b的整数商和余数。
//输入描述：
//一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
//输出描述：
//一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开。
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", a / b, a % b);
//    return 0;
//}


//描述
//将一个四位数，反向输出。
//输入描述：
//一行，输入一个整数n（1000 <= n <= 9999）。
//输出描述：
//针对每组输入，反向输出对应四位数。
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int a, b, c, d;
//    a = n % 10;
//    b = n / 10 % 10;
//    c = n / 100 % 10;
//    d = n / 1000;
//    printf("%d%d%d%d", a, b, c, d);
//    return 0;
//}


//描述
//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。
//输入描述：
//一行，连续输入5个整数（范围0~100），用空格分隔。
//输出描述：
//一行，输出5个数的平均数（保留一位小数）。
//#include <stdio.h>
//int main()
//{
//    int a, b, c, d, e = 0;
//    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//    float aver = (a + b + c + d + e) / 5.0;
//    printf("%.1lf", aver);
//    return 0;
//}



//描述
//KiKi想知道从键盘输入的两个数的大小关系，请编程实现。
//输入描述：
//题目有多组输入数据，每一行输入两个整数（范围 - 231~231 - 1），用空格分隔。
//输出描述：
//针对每行输入，输出两个整数及其大小关系，数字和关系运算符之间没有空格。
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    }
//    return 0;
//}



//描述
//给定秒数 seconds ，把秒转化成小时、分钟和秒。
//数据范围： 0 < seconds < 100000000\0 < seconds < 100000000
//输入描述：
//一行，包括一个整数，即给定的秒数。
//输出描述：
//一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
#include <stdio.h>
int main()
{
    int seconds = 0;
    scanf("%d", &seconds);
    int hour, minute, second = 0;
    hour = seconds / 3600;
    minute = seconds % 3600 / 60;
    second = seconds % 3600 % 60;
    printf("%d %d %d", hour, minute, second);
    return 0;
}