#define _CRT_SECURE_NO_WARNINGS 1

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int sum = money;
//	int bottle = sum;
//	while (bottle >= 2)
//	{
//		sum += bottle / 2;
//		bottle = bottle % 2 + bottle / 2;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


// ����ˮ�ɻ���
// Lily Number�������������,���м��ֳ���������,������в�ֺ�ĳ˻�֮�͵�������
// 655 = 6 * 55 + 65 * 5
// 1461 = 1 * 461 + 14 * 61 + 146 * 1
// ���5λ���е����� Lily Number��
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int j = 0;
//        int sum = 0;
//        for (j = 1; j <= 4; j++)
//        {
//            int ret = (int)pow(10, j);
//            sum += (i / ret) * (i % ret);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}


// ������ѭ������
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//��������ʹ����ȫ����λ��ż��ǰ�档
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//#include <stdio.h>
//void swap_odd_even(int arr[], int sz)
//{
//	int tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	swap_odd_even(arr, sz);
//	print(arr, sz);
//	return 0;
//}


// ģ��ʵ�ֿ⺯��strcpy
//#include <stdio.h>
//#include <assert.h>
//void my_strcpy(char arr1[], char arr2[])
//{
//	assert(arr1 && arr2);
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = "Hello World";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


// ģ��ʵ�ֿ⺯��strlen
//#include <stdio.h>
//int my_strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "Hello World";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

// ����һ���������У��ж��Ƿ����������У�
// ����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
// ���ݷ�Χ��3��n��50  �����е�ֵ������ 1��val��100
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	int flag1 = 0;// �ж��Ƿ�Ϊ����
//	int flag2 = 0;// �ж��Ƿ�Ϊ����
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] < arr[i - 1])
//				flag1 = 1;
//			else if (arr[i] > arr[i - 1])
//				flag2 = 1;
//		}
//	}
//	if (flag1 + flag2 <= 1)
//		printf("sorted");
//	else
//		printf("unsorted");
//	return 0;
//}


// ����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int max = 0;
//    int min = 100;
//    int score = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score);
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//    }
//    printf("%d\n", max - min);
//    return 0;
//}


// ���������������е����У����������кϲ�Ϊһ���������в������
// ���ݷ�Χ��1��n, m��1000�������е�ֵ���� 0��val��30000
// ����������
// �����������
// ��һ�а�������������n, m���ÿո�ָ���n��ʾ�ڶ��е�һ���������������ֵĸ�����
// m��ʾ�����еڶ����������������ֵĸ�����
// �ڶ��а���n���������ÿո�ָ���
// �����а���m���������ÿո�ָ���
// ���������
// ���Ϊһ�У��������Ϊn + m���������У�
// ������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���

// �ϲ�Ϊһ�����飬ð������
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int arr1[1000];
//	int arr2[1000];
//	int arr3[1000];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//		arr3[i] = arr1[i];
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//		arr3[i + n] = arr2[i];
//	}
//	// ð������
//	for (i = 0; i < m + n; i++)
//	{
//		for (j = 0; j < m + n - 1 - i; j++)
//		{
//			if (arr3[j] > arr3[j + 1])
//			{
//				int tmp = arr3[j];
//				arr3[j] = arr3[j + 1];
//				arr3[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}

// �Ƚ��������Сֱ�Ӵ�ӡ
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int arr1[1000];
//	int arr2[1000];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	i = 0; j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] > arr2[j])
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//	}
//	if (i == n)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//	else
//	{
//		for (; i < n; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}


// KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�X��ͼ����
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                {
//                    printf("*");
//                }
//                else if (i + j == n - 1)
//                {
//                    printf("*");
//                }
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


// KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵļ���ͼ����
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        // �ϰ벿��
//        for (i = 0; i < n; i++)
//        {
//            // ��ӡ�ո�
//            for (j = 0; j < n - i; j++)
//            {
//                printf("  ");
//            }
//            // ��ӡ*
//            for (j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        // �°벿��
//        for (i = 0; i < n + 1; i++)
//        {
//            for (j = 0; j < i; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    char v = -1;
//    // 10000000 00000000 00000000 00000001
//    // 11111111 11111111 11111111 11111110
//    // 11111111 11111111 11111111 11111111
//    printf("%d\n", strlen(a));
//    printf("%d\n", v);
//    printf("%u\n", v);
//    return 0;
//}


//������
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//#include <stdio.h>
//int main()
//{
//	int a, b, c, d, e = 0;
//	for (a = 0; a <= 5; a++)
//	{
//		for (b = 0; b <= 5; b++)
//		{
//			for (c = 0; c <= 5; c++)
//			{
//				for (d = 0; d <= 5; d++)
//				{
//					for (e = 0; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//������
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
#include <stdio.h>
int main()
{
	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer!='A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("%c\n", killer);
		}
	}
	return 0;
}