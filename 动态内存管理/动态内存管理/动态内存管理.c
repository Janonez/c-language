#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	// int arr[10]; // ���ڴ�����40���ֽ�
//	int* p = (int*)malloc(10*sizeof(int));
//	int* ptr = p;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	// ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;
//	}
//	// �ͷ�
//	free(p);
//	p = NULL;
//	ptr = NULL;
//	return 0;
//}
//
////calloc
//int main()
//{
//	//40���ֽ� - 10������
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
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.1 ��NULLָ��Ľ����ò���
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

// 3.2 �Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int*p = (int*)malloc(20);
//	if (p == NULL)
//		return 1;
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 20; i++) // ����ֽ�������ѭ��������Խ�����
//	{
//		*(p + i) = i;
//		//p[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// 3.3 �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	free(p);
//	p = NULL;
//
//	return 0;
//}

// 3.4 ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++) 
//	{
//		*p = i;
//		p++; 
//	}
//	//�ͷ�
//	// �ͷ�ʱ��pָ��Ĳ��Ƕ�̬���ٵ���ʼ��ַ 
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.5 ��ͬһ�鶯̬�ڴ����ͷ�
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

//�����᷵�ض�̬���ٿռ�ĵ�ַ���ǵ���ʹ��֮�󷵻�
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
//	//ʹ��
//
//	//�ͷ�
//	free(ptr);
//	ptr = NULL;
//
//	return 0;
//}


// ��������
//#include <stdio.h>
//struct S
//{
//	int n;
//	float s;
//	int arr[0]; // ���������Ա
//};
//struct S
//{
//	int n;
//	float s;
//	int arr[]; // ���������Ա
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
//	// ����
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int));
//	if (ptr == NULL)
//		return 1;
//	else
//		ps = ptr;
//	// ʹ��
//	// �ͷ�
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
//	// ʹ��
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &(ps->arr[i]));
//	}
//	// ����
//	/*int* ptr2 = (int*)realloc(ps->arr, 10 * sizeof(int));
//	if (ptr2 == NULL)
//		return 1;
//	else
//		ps->arr = ptr2;*/
//	// ��ӡ
//	printf("%d\n", ps->n);
//	printf("%f\n", ps->s);
//	for (i = 0; i < 4; i++)
//		printf("%d ", ps->arr[i]);
//
//	// �ͷ�
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
//    // �ж���������Ǽ�λ��
//    int tmp = n;
//    int count = 0;
//    do
//    {
//        tmp /= 10;
//        count++;
//    } while (tmp != 0);
//    // ѭ���ж�����������ż��
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

//ð������
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


//����
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