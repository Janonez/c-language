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
//  // int fputc ( int character, FILE * stream );
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
//  // int fgetc ( FILE * stream );
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
//  // int fputs ( const char * str, FILE * stream );
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
//  // char * fgets ( char * str, int num, FILE * stream );
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
//  // int fprintf ( FILE * stream, const char * format, ... );
//	fprintf(pf, "%s %d %.2lf", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��ȡһ���ṹ������
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = {0};
//	//��s�е�����д���ļ���
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//  // int fscanf ( FILE * stream, const char * format, ... );
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//scanf(...)
//fscanf(stdin,...)

//printf
//fprintf(stdout, ...)

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//
//	return 0;
//}

//�����Ƶ���ʽ��дһ���ṹ�������

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 95.5f };
//	//��s�е�����д���ļ���
//	FILE*pf = fopen("test.txt", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// �����Ƶ�д�ļ�
//	// size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�����ƵĶ��ļ�
struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct S s = {0};
	// ��s�е�����д���ļ���
	FILE* pf = fopen("test.txt", "rb");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	// �����ƵĶ��ļ�
	// size_t fread(void* ptr, size_t size, size_t count, FILE * stream);
	fread(&s, sizeof(s), 1, pf);

	printf("%s %d %.2f\n", s.name, s.age, s.score);

	fclose(pf);
	pf = NULL;
	return 0;
}