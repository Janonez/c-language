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
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int a, b, c, d;
    a = n % 10;
    b = n / 10 % 10;
    c = n / 100 % 10;
    d = n / 1000;
    printf("%d%d%d%d", a, b, c, d);
    return 0;
}