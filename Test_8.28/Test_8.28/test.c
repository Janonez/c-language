#define _CRT_SECURE_NO_WARNINGS 1

/************************һά����********************************/

//#include <stdio.h>
//
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

/*****************************��ά����*****************************************/

//#include <stdio.h>
//
//int main()
//{
//	// int arr1[3][4] = { 1,2,3,4,5 };
//	int arr2[3][4] = { {1,2},{3,4},5 };
//	// ��ά�����ʼ��������ʡ���У�����ʡ����
//	// int arr3[][4] = { 1,2,3,4 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr2[%d][%d] = %p\n", i,j,&arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/************************ð������************************************/

//#include <stdio.h>

//void bubble_sport(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//			
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// ���鴫��ʱ��д�����������������ݵ���������Ԫ�صĵ�ַ��������β���ָ�����������
//	bubble_sport(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	// int* p = &arr[0];
//	int* p = arr;// arr������������������������Ԫ�صĵ�ַ
//	// ������������
//	// 1> sizeof(������)����������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//	// 2> &����������������ʾ�������飬ȡ��������������ĵ�ַ
//	// arr <==> p
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p = %p\n", p+i, &arr[i]);
//	}*/
//
//	// arr[i] == *(arr+i)
//	for (i = 0; i < 10; i++)
//	{
//		// printf("%d ", arr[i]);
//		// printf("%d ", *(p + i));
//		// printf("%d ", *(arr + i));
//		printf("%d ", p[i]);
//	}
//	return 0;
//}


