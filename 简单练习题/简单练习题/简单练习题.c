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
//#include <stdio.h>
//int main()
//{
//    char ch = 0;
//    int count = 0;
//    while ((ch = getchar()) != '0')
//    {
//        if (ch == 'A')
//            count++;
//        else if (ch == 'B')
//            count--;
//    }
//    if (count > 0)
//        printf("A\n");
//    else if (count < 0)
//        printf("B\n");
//    else
//        printf("E\n");
//    return 0;
//}



//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ�
//ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
//��ע�������ж������룩
//����������ÿһ�У�����7��������0~100��������7���ɼ����ÿո�ָ���
//���������ÿһ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С�������2λ��ÿ��������С�
#include <stdio.h>
//int main()
//{
//	int arr[7] = { 0 };
//	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2],
//		&arr[3], &arr[4], &arr[5], &arr[6]) == 7)
//	{
//		int i = 0;
//		int max = 0;
//		int min = 100;
//		int sum = 0;
//		for (i = 0; i < 7; i++)
//		{
//			if (arr[i] > max)
//				max = arr[i];
//			if (arr[i] < min)
//				min = arr[i];
//			sum += arr[i];
//		}
//		printf("%.2lf\n", (sum - max - min) / 5.0);
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int n = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	while (scanf("%d", &num) == 1)
//	{
//		if (num > max)
//			max = num;
//		if (num < min)
//			min = num;
//		sum += num;
//		n++;
//		if (n == 7)
//		{
//			printf("%.2lf\n", (sum - min - max) / 5.0);
//			sum = 0;
//			n = 0;
//			max = 0;
//			min = 100;
//		}
//	}
//
//	return 0;
//}



//KiKi������վ���õ�HTTP״̬�룬������֪��ʲô���壬BoBo��ʦ����������HTTP״̬�룺
//200��OK�������ѳɹ�����202��Accepted���������ѽ������󣬵���δ������
//400��Bad Request������������󣩣�403��Forbidden������ֹ����
//404��Not Found������ʧ�ܣ���500��Internal Server Error���������ڲ����󣩣�
//502��Bad Gateway���������أ���
//�����������������룬һ�У�һ��������100~600������ʾHTTP״̬�롣
//������������ÿ�������HTTP״̬�������״̬���Ӧ�ĺ��壬�����Ӧ���£�
//200 - OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
#include <stdio.h>

int main() {
    int status = 0;
    while (scanf("%d", &status) == 1)
    {
        switch (status)
        {
        case 200:
            printf("OK\n");
            break;
        case 202:
            printf("Accepted\n");
            break;
        case 400:
            printf("Bad Request\n");
            break;
        case 403:
            printf("Forbidden\n");
            break;
        case 404:
            printf("Not Found\n");
            break;
        case 500:
            printf("Internal Server Error\n");
            break;
        case 502:
            printf("Bad Gateway\n");
            break;
        }
    }
    return 0;
}