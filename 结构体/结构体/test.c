#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct Stu
//{
//	char name[20];// ����
//	int age;// ����
//	char sex[5];// �Ա�
//	int hight;// ���
//}s1,s2,s3;// ȫ�ֱ���
//
//struct Stu s4;// ȫ�ֱ���
//
//int main()
//{
//	struct Stu s5;// �ֲ�����
//	return 0;
//}
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Stu
//{
//	char name[20];// ����
//	int age;// ����
//	char sex[5];// �Ա�
//	int hight;// ���
//};
//
//struct S
//{
//	char c;
//	struct Point p;
//	double d;
//	char str[20];
//};
//
//int main()
//{
//	struct S ss = { 'x', {100,200},3.14,"hehe" };
//	// struct S ss = { .d = 3.14,.p.x = 100,.c = 'x' };
//	printf("%c %d %d %lf %s\n", ss.c, ss.p.x, ss.p.y, ss.d, ss.str);
//
//	struct Point p = { 100,200 };
//	struct Stu s = { "����",20,"��",180 };
//	printf("x=%d y=%d\n", p.x, p.y);
//	printf("%s %d %s %d\n", s.name, s.age, s.sex, s.hight);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S s = { .age = 20,.name = "����" };
//	printf("%s %d\n", s.name, s.age);
//	s.age = 30;
//	// s.name = "������"; // ����nameΪ������Ԫ�ص�ַ
//	strcpy(s.name, "������");
//	printf("%s %d\n", s.name, s.age);
//	return 0;
//}

// �ṹ�崫�κͽṹ���Ա����
struct S
{
	int data[1000];
	char buf[100];
};

void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ss.data[i]);// �ṹ�����.�ṹ���Ա��
	}
	printf("%s\n", ss.buf);
}

void print2(struct S* ps)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->data[i]);// �ṹ��ָ��->�ṹ���Ա��
	}
	printf("%s\n", ps->buf);
}

int main()
{
	struct S s = { {1,2,3},"hehe" };
	print1(s);// ��ֵ����
	print2(&s);// ��ַ����
	return 0;
}