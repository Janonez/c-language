#define _CRT_SECURE_NO_WARNINGS 1

// 1.�ṹ�������
// 1.1 �ṹ������
//struct tag
//{
//	member-list;
//}variable-list;
//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//}; //�ֺŲ��ܶ�

// 1.2 ���������
// �������ṹ��ʱ�򣬿��Բ���ȫ��������
// �����ṹ������
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;
// ����������ṹ��������ʱ��ʡ�Ե��˽ṹ���ǩ��tag����
// ���棺����������������������������ȫ��ͬ���������͡������ǷǷ��ġ�


// 1.3�ṹ��������
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//// ���¶��������
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


// 1.4 �ṹ������Ķ���ͳ�ʼ��
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	int price;
//	char id[15];
//}sb3,sb4;
//// sb3,sb4��struct Book���͵Ľṹ���������ȫ�ֱ���
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	// �ֲ�����
//	struct Book sb1;
//	struct Book sb2;
//	struct Stu ss1;
//	struct Stu ss2;
//	return 0;
//}


// struct Book
//{
//    char book_name[20];
//    char author[20];
//    int price;
//    char id[15];
//    struct Stu s;
//}sb3 = { "����C����", "����", 88, "PG10001", {"lisi", 30, "20220101"}}, sb4;
//struct Book sb5;
//int main()
//{
//    //struct Book sb1 = {"������C++��", "����", 88, "HG10001"};//�ֲ�����
//    //struct Book sb2;//�ֲ�����
//    printf("%s %s %d %s %s %d %s\n", sb3.book_name, sb3.author, 
//			sb3.price, sb3.id, sb3.s.name, sb3.s.age, sb3.s.id);
//    //struct Stu ss1;
//    //struct Stu ss2;
//    return 0;
//}



//struct S
//{
//    char c;
//    int a;
//    float f;
//};
//
//int main()
//{
//    struct S s = {'w', 10, 3.14f};
//    printf("%c %d %f\n", s.c, s.a, s.f);
//
//    struct S s2 = {.f = 3.14f, .c = 'w', .a = 10};
//    printf("%c %d %f\n", s2.c, s2.a, s2.f);
//
//    return 0;
//}


// 1.5�ṹ���ڴ����
//#include <stdio.h>
//#include <stddef.h>
//struct S1 
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//	
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}


//��ϰ4-�ṹ��Ƕ������
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));// 16
//	printf("%d\n", sizeof(struct S4));// 32
//	return 0;
//}
// ���ȵ����սṹ��Ķ������
// 1. ��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
// 2. ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
// ������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
// VS��Ĭ�ϵ�ֵΪ8
// 3. �ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
// 4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ�����
// ���С��������������������Ƕ�׽ṹ��Ķ�����������������

//������ƽṹ���ʱ�����Ǽ�Ҫ������룬��Ҫ��ʡ�ռ䣬���������
//��ռ�ÿռ�С�ĳ�Ա����������һ��

//#include <stdio.h>
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	//����Ľ����ʲô��
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}


// 1.6 �ṹ�崫��
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////�ṹ�崫��
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////�ṹ���ַ����
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); //���ṹ��
//	print2(&s); //����ַ
//	return 0;
//}
// �ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��
// �������ε�ʱ�򣬲�������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ������
// �������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���



// 2.λ��
//#include <stdio.h>

//struct S
//{
//	int a;
//	int b;
//	int c;
//	int d;
//};
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//struct C
//{
//	char _a : 3;
//	char _b : 4;
//	char _c : 5;
//	char _d : 4;
//
//};
//int main()
//{
//	printf("%d\n", sizeof(struct C));
//	//printf("%d\n", sizeof(struct A));
//	return 0;
//}


