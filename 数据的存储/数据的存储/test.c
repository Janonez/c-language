#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>

//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		// %u 打印无符号整型数字，死循环
//		Sleep(100);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	// -1 -2 -3 -4 ... -126 -127 -128 127 ... 3 2 1 0 
//	// 
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a)); // 255
//	return 0;
//}


//unsigned char i = 0;
//// char -128~127 unsigned char 0~255
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

int main()
{
	float a = 5.5f;
	// (-1)^0 * 1.011 * 2^2
	// S = 0       (-1)^S表示符号位
	// M = 1.011   M表示有效数字
	// E = 2       2^E表示指数位,存在内存中float类型+127，double类型+1023
	// 0 10000001 01100000000000000000000
	// 40b00000
	
	return 0;
}