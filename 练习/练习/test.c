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
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[] = { 0 };
	int i = 0;
	int frag1 = 0;// �ж��Ƿ�Ϊ����
	int frag2 = 0;// �ж��Ƿ�Ϊ����
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr[i]);
		if (i > 0)
		{
			if (arr[i] < arr[i - 1])
				frag1 = 1;
			else if (arr[i] > arr[i - 1])
				frag2 = 1;
		}
	}
	if (frag1 + frag2 <= 1)
		printf("sorted");
	else
		printf("unsorted");
	return 0;
}