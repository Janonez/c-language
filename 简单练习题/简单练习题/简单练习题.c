#define _CRT_SECURE_NO_WARNINGS 1
//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳�������
//����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//������������Ŀ�ж����������ݣ�ÿһ����������a��b��c(0 < a, b, c < 1000)
//��Ϊ�����ε������ߣ��ÿո�ָ���
//������������ÿ���������ݣ����ռһ�У�����ܹ��������Σ�
//�ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����
//������������������Ordinary triangle!������֮�����Not a triangle!����
//#include <stdio.h>
//int main()
//{
//    int a, b, c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}



//������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B��
//����ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
//����������һ�У��ַ����У�����A��B���������ַ�0������
//���������һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬
//���E��ʾ���˵�Ʊ����ȡ�
#include <stdio.h>
int main()
{
    char ch = 0;
    int count = 0;
    while ((ch = getchar()) != '0')
    {
        if (ch == 'A')
            count++;
        else if (ch == 'B')
            count--;
    }
    if (count > 0)
        printf("A\n");
    else if (count < 0)
        printf("B\n");
    else
        printf("E\n");
    return 0;
}
