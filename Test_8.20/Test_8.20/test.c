#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#define MAX 100
// һ�������п����ж��.c�ļ������Ƕ��.c�ļ���ֻ����һ��main����
//int main()
//{
//	// 1.���泣�� ==> ֱ��д������
//	/*
//	100
//	3.14
//	'a'
//	"abcde"
//	*/
//
//	// 2.const���εĳ�����
//	const int num = 10;
//	// num = 20; (�����������޸�)
//	printf("%d\n",num);
//
//	// 3.#define ����ı�ʶ������
//	printf("%d\n",MAX);
//	// MAX = 200; ==> ����
//
//	return 0;
//}

// 4.ö�ٳ���
// �Ա�Ѫ�͡���ԭɫ
//enum Sex  // ö��
//{
//	// ������enum Sex���ͱ����Ŀ���ȡֵ������������ȡֵ����ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};

//int main()
//{
//	enum Sex s = MALE;// �Ա�
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}

// 4.�ַ���
//int main()
//{
//	printf("hello world.\n");
//	// \0 ת���ַ����ַ����Ľ�����־������������
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//
//	// strlen �ǿ⺯��<string.h>����ר�����ַ������ĺ���
//	// string length
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//}

// '\' ==> ת���ַ� 

/*
    \? \' \" \\ ��ʾԭ���ĺ���
    \a ==> ���棬���� \b ==> �˸� \f ==> ��ֽ��
    \n ==> ���� \r ==> �س� \t ==> tab \v ==>
    \ddd ==> ��ʾ1~3���˽������� ���磺\130
    \xdd ==> ��ʾ2��ʮ���������� ���磺\x40
*/

//int main()
//{
//	printf("c:\test\test.c\n");
//	printf("%s\n", "abc");
//	printf("%c\n", '\'');
//	printf("\a\a\a\a");
//	printf("b\vc\td");
//	return 0;
//}

    //%d ==> ��ӡ����
    //%s ==> ��ӡ�ַ���
    //%c ==> ��ӡ�ַ�


// ������
// printf("%d\n",strlen("c:\test\628\test.c")); ==> 14

//#include <stdio.h>
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������\n");
//	scanf("%d %d",&a, &b);
//	int max = a > b ? a : b;
//	printf("���������У��ϴ��Ϊ��%d",max);
//	return 0;
//}

#include <stdio.h>
int main()
{
    int IQ = 0;
    while (scanf("%d", &IQ))
    {
        if (IQ >= 140)
        {
            printf("Genius\n");
        }
    }
    return 0;
}