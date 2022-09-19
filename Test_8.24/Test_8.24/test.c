#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
// welcome to bit!!!!!
// w#################!
// we###############!!
// ...
// welcome to bit!!!!!

//int main()
//{
//	char arr1[] =  "welcome to bit!!!!!";
//	char arr2[] =  "###################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

// 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登陆成功，三次输入错误退出程序
// 正确密码 bitbit

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:\n");
//		scanf("%s", password);
//		if (strcmp(password, "bitbit") == 0) // strcmp => string compare 判断字符串是否相等
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	return 0;
//}

// 猜数字游戏
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("********* 1.play ***********\n");
//	printf("********* 0.exit ***********\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	// 1.生成随机数
//	// rand函数可以生成随机数，返回一个0~RAND_MAX(32767)
//	int ret = rand() % 100 + 1;// 获得一个1~100的随机数
//	// 2.猜数字
//	
//	while (1)
//	{
//		printf("请猜数字：\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了。\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了。\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了。\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	// 设置随机数生成器
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新选择：\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//flag:
//	printf("请注意你的电脑将在一分钟后关机，请输入：我是猪，取消关机\n");
//	scanf("%s",arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("关机取消\n");
//	}
//	else
//	{
//		goto flag;
//	}
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "Hello Bit!";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char arr[20] = "Hello Bit";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("%d", max);
//	return 0;
//}

//void swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
// 当函数调用的时候，实参(a,b)传给形参(x,y)是，形参是实参的临时拷贝
// 对形参的修改是不影响实参的
void swap(int* px, int* py)
{
	int t = 0;
	t = *px;
	*px = *py;
	*py = t;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("调换前：a=%d b=%d\n", a, b);
	// swap(a,b); 传值调用
	swap(&a, &b);// 传地址，传址调用
	printf("调换后：a=%d b=%d\n", a, b);
	return 0;
}

//// 指针
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}