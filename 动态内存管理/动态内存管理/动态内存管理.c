#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	// int arr[10]; // 向内存申请40个字节
//	int* p = (int*)malloc(10*sizeof(int));
//	int* ptr = p;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// 使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;
//	}
//	// 释放
//	free(p);
//	p = NULL;
//	ptr = NULL;
//	return 0;
//}
//
////calloc
//int main()
//{
//	//40个字节 - 10个整型
//	//malloc(40);
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.1 对NULL指针的解引用操作
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		*p = 5;
//	}
//	
//	free(p);
//	p = NULL;
//	
//	return 0;
//}

// 3.2 对动态开辟空间的越界访问
//int main()
//{
//	int*p = (int*)malloc(20);
//	if (p == NULL)
//		return 1;
//	//使用
//	int i = 0;
//	for (i = 0; i < 20; i++) // 误把字节数当做循环次数，越界访问
//	{
//		*(p + i) = i;
//		//p[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// 3.3 对非动态开辟内存使用free释放
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// 3.4 使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++) 
//	{
//		*p = i;
//		p++; 
//	}
//	//释放
//	// 释放时，p指向的不是动态开辟的起始地址 
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.5 对同一块动态内存多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	
//	free(p);
//	p = NULL;
//
//	free(p);
//
//	return 0;
//}


//void get_memory()
//{
//	int* p = (int*)malloc(40);
//	//....
//	free(p);
//	p = NULL;
//}

//函数会返回动态开辟空间的地址，记得在使用之后返回
//int* get_memory()
//{
//	int* p = (int*)malloc(40);
//	//....
//	return p;
//}
//
//
//int main()
//{
//	int *ptr = get_memory();
//	//使用
//
//	//释放
//	free(ptr);
//	ptr = NULL;
//
//	return 0;
//}


// 柔性数组
//#include <stdio.h>
//struct S
//{
//	int n;
//	float s;
//	int arr[0]; // 柔性数组成员
//};
//struct S
//{
//	int n;
//	float s;
//	int arr[]; // 柔性数组成员
//};
//int main()
//{
//	// printf("%d\n", sizeof(struct S));
//	// struct S s;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 4 * sizeof(int));
//	if (ps == NULL)
//		return 1;
//	ps->n = 100;
//	ps->s = 5.5f;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &(ps->arr[i]));
//	}
//	printf("%d %lf\n", ps->n, ps->s);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	// 调整
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int));
//	if (ptr == NULL)
//		return 1;
//	else
//		ps = ptr;
//	// 使用
//	// 释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	float s;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//		return 1;
//	ps->n = 100;
//	ps->s = 23.3f;
//	int* ptr = (int*)malloc(sizeof(int) * 4);
//	if (ptr == NULL)
//		return 1;
//	else
//		ps->arr = ptr;
//
//	// 使用
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &(ps->arr[i]));
//	}
//	// 调整
//	/*int* ptr2 = (int*)realloc(ps->arr, 10 * sizeof(int));
//	if (ptr2 == NULL)
//		return 1;
//	else
//		ps->arr = ptr2;*/
//	// 打印
//	printf("%d\n", ps->n);
//	printf("%f\n", ps->s);
//	for (i = 0; i < 4; i++)
//		printf("%d ", ps->arr[i]);
//
//	// 释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    // 判断输入的数是几位数
//    int tmp = n;
//    int count = 0;
//    do
//    {
//        tmp /= 10;
//        count++;
//    } while (tmp != 0);
//    // 循环判断是奇数还是偶数
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < count; i++)
//    {
//        int a = n % 10;
//
//        if (a % 2 == 1)
//            sum += 1 * pow(10, i);
//
//        n /= 10;
//    }
//
//    printf("%d", sum);
//    return 0;
//}

//冒泡排序
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}


//快排
//#include <stdio.h>
//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//    return (*(int*)e2 - *(int*)e1);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    qsort(arr, n, sizeof(int), cmp_int);
//    for (i = 0; i < 5; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


// #include <stdio.h>

// int main() {
//     int n = 0;
//     while (scanf("%d", &n) != EOF) 
//     {
//         int i = 0;
//         int arr[n];
//         for(i = 0;i < n;i++)
//         {
//             arr[i] = i+1;
//         }
//         for(i = 0;i < n;i++)
//         {
//             int j = 0;
//             for(j = 0;j<=i;j++)
//             {
//                 printf("%d ", arr[j]);
//             }
//             printf("\n");
//         } 
//     }
//     return 0;
// }


//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 1;
//        int arr[n];
//        for (i = 1; i <= n; i++)
//        {
//            int j = 1;
//            for (j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
// int main() 
// {
//     int n = 0;
//     while(scanf("%d",&n) == 1)
//     {
//         int i = 0;
//         for(i = 0;i < n;i++)
//         {
//             int j = 0;
//             for(j = 0;j<n-i-1;j++)
//             {
//                 printf(" ");
//             }
//             printf("*\n");
//         }
//     }
//     return 0;
// }
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
//                if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


#include <stdio.h>

int main()
{
    int arr[100001] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int m = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        arr[m] = 1;
    }
    for (i = 1; i <= 100000; i++)
    {
        if (arr[i] != 0)
            printf("%d ", i);
    }
    return 0;
}