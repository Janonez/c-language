#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// ���ļ�
// FILE* fopen(const char* filename, const char* mode);// mode �򿪷�ʽ
// �ر��ļ�
// int fclose(FILE* stream); // �ļ���
//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "w");// ���·��
//	// FILE* pf = fopen("d:\\code\\test.txt", "w");// ����·��
//
//	// û���ҵ��᷵�ؿ�ָ�룬�ж��Ƿ�Ϊ��ָ�룬����ǿ�ָ��ͱ���
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// д�ļ�  fputc - �����ַ������д���ļ��У�
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "w");
//
//	// �ж�
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// д�ļ�
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//	}
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;// �ͷ�
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	/*int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		int ch = fgetc(pf);
//		printf("%c ", ch);
//	}*/
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// ����˳��д�ı���
//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "w");
// 
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
// 
//	// д�ļ� - һ��һ��д
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
// 
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// ����˳����ı���
//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// д�ļ� - һ��һ�ж����浽������
//	char arr[20] = "###############";
//	fgets(arr,20,pf);
//	printf("%s", arr);
//	
//	fgets(arr,20,pf);
//	printf("%s", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// дһ���ṹ�������
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "����",20,95.5f };
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// д�ļ�
//	fprintf(pf, "%s %d %.2lf", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��ȡһ���ṹ������
struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct S s = {0};
	//��s�е�����д���ļ���
	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	//���ļ�
	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));

	printf("%s %d %f\n", s.name, s.age, s.score);

	fclose(pf);
	pf = NULL;

	return 0;
}
