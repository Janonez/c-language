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