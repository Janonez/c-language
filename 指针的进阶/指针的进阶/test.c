#define _CRT_SECURE_NO_WARNINGS 1



// 1.�ַ�ָ��
//#include <stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w'; //�����ַ����������޸�
//	return 0;
//}

//int main()
//{
//	const char* pstr = "hello world."; 
//	// �����ǰ��ַ��� hello worlf.���ַ��ĵ�ַ�ŵ���pstr��
//	printf("%s\n", pstr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";// ����str3��str4ָ�����һ��ͬһ�������ַ�����ָ��ͬһ���ڴ�
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

// 2.ָ������
//int main()
//{
//	/*char* arr[5] = { "abcdef","zhangsan","wangcai","hehe","ruhua" };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}*/
//
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[3] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//
//	char ch = 'w';
//	char* p2 = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	int(*p3)[10] = &arr;// ȡ������ĵ�ַ�ŵ�p3�У�p3������ָ�����
//	// int(*)[10] -> ����ָ������
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}


// 3.����ָ��

//int main()
//{
//	int a = 10;
//	int*p1 = &a;
//
//	char ch = 'w';
//	char* p2 = &ch;
//
//	char arr[6] = {0};
//	char (*p3)[6] = &arr;
//
//	return 0;
//}

// ����ָ���ʹ��

//void print1(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//void print1(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//}

//void print2(int(*arr)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*arr)[i]);
//	}
//	printf("\n");
//}

//void test1()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// print1(arr, sz);
//	print2(&arr, sz);
//}

//void print3(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print4(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//void test2()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	// print3(arr, 3, 5);
//	print4(arr, 3, 5);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

// 4.���������ָ�����
// 4.1һά���鴫��
// ���鴫�Σ��βο��������飬Ҳ������ָ��
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

// 4.2��ά���鴫��
//void test(int arr[3][5])//ok��
//{}
//void test(int arr[][])//err
//{}
//void test(int arr[][5])//ok��
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//err
//{}
//void test(int* arr[5])//err
//{}
//void test(int(*arr)[5])//ok��
//{}
//void test(int** arr)//err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

// 4.3һ��ָ�봫��
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}
// ˼������һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô������
//void test1(int* p)
//{}
////test1�����ܽ���ʲô������
//int a = 0;
//test(&a);
//
//int* ptr = &a;
//test(ptr);
//
//int arr[10];
//test(arr);


// 4.4 ����ָ�봫��
//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
// ˼�����������Ĳ���Ϊ����ָ���ʱ�򣬿��Խ���ʲô������
//void test(char** p)
//{ }
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//Ok?
//	return 0;
//}

// 5. ����ָ��
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//
//	// Add �� &Add���Ǻ����ĵ�ַ��û������
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//
//	// pf���Ǻ���ָ�����
//	// int (*pf)(int x,int y) = &Add;
//	int (*pf)(int x,int y) = Add;
//	// int sum = (*pf)(3, 5);
//	int sum = Add(3, 5);
//	printf("%d\n", sum);
//	return 0;
//}

//int test(const char* str, double d)
//{
//
//}
//
//int main()
//{
//	// int (*pt)(const char* str, double d) = &test;
//	int (*pt)(const char*, double) = &test;
//	return 0;
//}

//int main()
//{
//	(*(void (*) ())0)();
//	// 0 - int
//	// (void (*) ())0 - ��0ǿ��ת����void (*)()�ĺ���ָ��
//	// (*(void (*) ())0)() - �����ã�����0��ַ�ĺ���
//
//	void( *signal( int, void(*)(int) ) )(int);
//	// ���������Ǻ�������
//	// �����ĺ����У�signal
//	// signal�����ĵ�һ��������int����
//	// signal�����ĵڶ��������Ǻ���ָ�����ͣ��ú���ָ��ָ��ĺ���������int������������void
//	// signal�����ķ�������Ҳ�Ǻ���ָ�����ͣ��ú���ָ��ָ��ĺ���������int������������void
//
//	typedef void(*pf_t)(int);
//	pf_t signal(int, pf_t);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	return 0;
//}

// 6.����ָ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	// ����ָ������
//	// ���Դ�Ŷ�� ������ͬ������������ͬ �ĺ����ĵ�ַ
//	int (*pfArr[2])(int, int) = { Add,Sub };
//
//	int ret = pfArr[0](2, 3);
//	printf("%d\n", ret);
//	ret = pfArr[1](2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

// дһ��������
//�����ļӡ������ˡ���
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***** 1.add    2. sub  ****\n");
//	printf("***** 3.mul    4. div  ****\n");
//	printf("***** 0.exit           ****\n");
//	printf("***************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:	
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}

//��һ�´���

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***** 1.add    2. sub  ****\n");
//	printf("***** 3.mul    4. div  ****\n");
//	printf("***** 0.exit           ****\n");
//	printf("***************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��->");
//		scanf("%d",&input);
//		//����ָ������   - ת�Ʊ�
//		int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//			break;
//		}
//		if (input >= 1 && input <= 4)
//		{
//			printf("������Ҫ������������:");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//			printf("ѡ�����\n");
//	} while (input);
//	return 0;
//}

// 7. ָ����ָ�������ָ��
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//����ָ��pfun
//	void (*pfun)(const char*) = test;
//	//����ָ�������pfunArr
//	void (*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	//ָ����ָ������pfunArr��ָ��ppfunArr
//	void ( *( *ppfunArr )[5] )( const char* ) = &pfunArr;
//	return 0;
//}

// 8.�ص�����
//#include <stdio.h>

//void menu()
//{
//	printf("******************************\n");
//	printf("******    1.Add  2.Sub   *****\n");
//	printf("******    3.Mul  4.Div   *****\n");
//	printf("******       0.exit      *****\n");
//	printf("******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������Ҫ�����������:->");
//	scanf("%d %d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("����������ѡ��->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������");
//			break;
//		default:
//			printf("�����������������룡\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

// ð������
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test1()
{
	// ð������
	// �������������������������
	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print(arr, sz);
}


//qsort ���������������͵�����
//void qsort(void* base, //���������ݵ���ʼ��ַ
//	       size_t num,   //���������ݵ�Ԫ�ظ���
//	       size_t size,  //����������Ԫ�صĴ�С����λ���ֽڣ�
//	       int (*cmp)(const void*, const void*) //�Ƚ�2��Ԫ�ش�С�ĺ���ָ��
//          );


//int cmp_int(const void* e1, const void* e2)
//{
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 < *(int*)e2)
//		return -1;
//	else
//		return 0;
//}
// 
// ��
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2); // e1 - e2 ����e2 -e1 ����
}

// ����qsort����������������
void test2()
{
	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}

//  ����qsort��������ṹ������
struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test3()
{
	struct Stu s[] = { {"zhangsan",20}, {"lisi",50}, {"wangwu",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	// ������������
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	// ������������
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort2(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}

void test4()
{
	int arr[] = { 2,1,3,7,5,9,6,8,0,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}


void test5()
{
	struct Stu s[] = { {"zhangsan", 20}, {"lisi", 55}, {"wangwu", 40} };
	//�������ֱȽ�
	int sz = sizeof(s) / sizeof(s[0]);
	// bubble_sort2(s, sz, sizeof(s[0]), cmp_stu_by_name);
	bubble_sort2(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main()
{
	// test1();
	// test2();
	// test3();
	// test4();
	test5();
	return 0;
}