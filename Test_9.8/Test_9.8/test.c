#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>

// ȫ�ֱ�������̬��������ʼ��Ĭ��Ϊ0
// ȫ�ֱ�������̬��������ھ�̬��
// �ֲ���������ʼ��Ĭ��Ϊ���ֵ
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

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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
