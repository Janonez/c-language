#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>

// 全局变量，静态变量不初始化默认为0
// 全局变量，静态变量存放在静态区
// 局部变量不初始化默认为随机值
//int i;
//int main()
//{
//    i--;
//    printf("%d\n", i);
//    printf("%u\n", i);
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	// 00000000 00000000 00000000 11111111
	int i = 0;
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	return 0;
}
