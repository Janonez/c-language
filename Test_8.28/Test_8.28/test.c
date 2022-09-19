#define _CRT_SECURE_NO_WARNINGS 1

/************************一维数组********************************/

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

/*****************************二维数组*****************************************/

//#include <stdio.h>
//
//int main()
//{
//	// int arr1[3][4] = { 1,2,3,4,5 };
//	int arr2[3][4] = { {1,2},{3,4},5 };
//	// 二维数组初始化，可以省略行，不能省略列
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

/************************冒泡排序************************************/

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
//	// 数组传参时，写的是数组名，但传递的是数组首元素的地址，数组的形参用指针变量来接收
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
//	int* p = arr;// arr是数组名，数组名是数组首元素的地址
//	// 存在两个例外
//	// 1> sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小。单位是字节
//	// 2> &数组名，数组名表示整个数组，取出的是整个数组的地址
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


