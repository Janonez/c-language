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
//#include <stdio.h>
//int main()
//{
//    char ch = 0;
//    int count = 0;
//    while ((ch = getchar()) != '0')
//    {
//        if (ch == 'A')
//            count++;
//        else if (ch == 'B')
//            count--;
//    }
//    if (count > 0)
//        printf("A\n");
//    else if (count < 0)
//        printf("B\n");
//    else
//        printf("E\n");
//    return 0;
//}



//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制）
//去掉一个最高分和一个最低分，输出每组的平均成绩。
//（注：本题有多组输入）
//输入描述：每一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
//输出描述：每一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。
#include <stdio.h>
//int main()
//{
//	int arr[7] = { 0 };
//	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2],
//		&arr[3], &arr[4], &arr[5], &arr[6]) == 7)
//	{
//		int i = 0;
//		int max = 0;
//		int min = 100;
//		int sum = 0;
//		for (i = 0; i < 7; i++)
//		{
//			if (arr[i] > max)
//				max = arr[i];
//			if (arr[i] < min)
//				min = arr[i];
//			sum += arr[i];
//		}
//		printf("%.2lf\n", (sum - max - min) / 5.0);
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int n = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	while (scanf("%d", &num) == 1)
//	{
//		if (num > max)
//			max = num;
//		if (num < min)
//			min = num;
//		sum += num;
//		n++;
//		if (n == 7)
//		{
//			printf("%.2lf\n", (sum - min - max) / 5.0);
//			sum = 0;
//			n = 0;
//			max = 0;
//			min = 100;
//		}
//	}
//
//	return 0;
//}



//KiKi访问网站，得到HTTP状态码，但他不知道什么含义，BoBo老师告诉他常见HTTP状态码：
//200（OK，请求已成功），202（Accepted，服务器已接受请求，但尚未处理。）
//400（Bad Request，请求参数有误），403（Forbidden，被禁止），
//404（Not Found，请求失败），500（Internal Server Error，服务器内部错误），
//502（Bad Gateway，错误网关）。
//输入描述：多组输入，一行，一个整数（100~600），表示HTTP状态码。
//输出描述：针对每组输入的HTTP状态，输出该状态码对应的含义，具体对应如下：
//200 - OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
#include <stdio.h>

int main() {
    int status = 0;
    while (scanf("%d", &status) == 1)
    {
        switch (status)
        {
        case 200:
            printf("OK\n");
            break;
        case 202:
            printf("Accepted\n");
            break;
        case 400:
            printf("Bad Request\n");
            break;
        case 403:
            printf("Forbidden\n");
            break;
        case 404:
            printf("Not Found\n");
            break;
        case 500:
            printf("Internal Server Error\n");
            break;
        case 502:
            printf("Bad Gateway\n");
            break;
        }
    }
    return 0;
}