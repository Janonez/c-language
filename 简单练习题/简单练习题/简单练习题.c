#define _CRT_SECURE_NO_WARNINGS 1
//KiKi想知道已经给出的三条边a，b，c能否构成三角形
//如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述：题目有多组输入数据，每一行输入三个a，b，c(0 < a, b, c < 1000)
//作为三角形的三个边，用空格分隔。
//输出描述：针对每组输入数据，输出占一行，如果能构成三角形，
//等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，
//其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。
//#include <stdio.h>
//int main()
//{
//    int a, b, c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}



//假设你们社团要竞选社长，有两名候选人分别是A和B，
//社团每名同学必须并且只能投一票，最终得票多的人为社长.
//输入描述：一行，字符序列，包含A或B，输入以字符0结束。
//输出描述：一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，
//输出E表示二人得票数相等。
#include <stdio.h>
int main()
{
    char ch = 0;
    int count = 0;
    while ((ch = getchar()) != '0')
    {
        if (ch == 'A')
            count++;
        else if (ch == 'B')
            count--;
    }
    if (count > 0)
        printf("A\n");
    else if (count < 0)
        printf("B\n");
    else
        printf("E\n");
    return 0;
}
