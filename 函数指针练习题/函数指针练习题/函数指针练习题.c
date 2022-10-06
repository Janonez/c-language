#define _CRT_SECURE_NO_WARNINGS 1
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习
//该任务是打印用“* ”组成的“空心”正方形图案。
//输入描述：多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“ * ”的数量。
//输出描述：针对每行输入，输出用“ * ”组成的“空心”正方形，每个“ * ”后面有一个空格。
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，
//保证插入新数后，序列仍然是升序。
//输入描述：第一行输入一个整数(0≤N≤50)。
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
//第三行输入想要进行插入的一个整数。
//输出描述：输出为一行，N + 1个有序排列的整数。
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n + 1];
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    int k = 0;
//    scanf("%d", &k);
//    int j = 0;
//    for (j = n - 1; j >= 0; j--)
//    {
//        if (arr[j] > k)
//            arr[j + 1] = arr[j];
//        else
//            break;
//    }
//    arr[j + 1] = k;
//    for (j = 0; j < n + 1; j++)
//        printf("%d ", arr[j]);
//    return 0;
//}