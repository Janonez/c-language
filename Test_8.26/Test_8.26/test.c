#define _CRT_SECURE_NO_WARNINGS 1

//**********************�Ƿ�Ϊ����*********************************************

//#include <stdio.h>
//
//void leap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//}
//int main()
//{
//	int year = 0;
//	printf("��������ݣ�");
//	scanf("%d", &year);
//	leap(year);
//	return 0;
//}

//**********************��������*********************************************

//#include <stdio.h>
//
//void swap(int *px, int *py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	printf("��������������");
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰa=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("����ǰa=%d,b=%d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d", max);
//	return 0;
//}

//**********************�Ƿ�Ϊ����*********************************************

//#include <stdio.h>
//#include <math.h> // ������ sqrt()
//
//// ������������- prime 
//// �����ط���1�����Ƿ���0
//int prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	// ��ӡ100~200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}

//*******************��������������ֲ���************************************************

//#include <stdio.h>
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ���ҵ�����");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
//	}
//	return 0;
//}

// *******************��ʽ����*************************

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	// printf�ķ���ֵ�Ǵ�ӡ�����ַ�����
//	return 0;
//}