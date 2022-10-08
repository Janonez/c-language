#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// 打开文件
// FILE* fopen(const char* filename, const char* mode);// mode 打开方式
// 关闭文件
// int fclose(FILE* stream); // 文件流
//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "w");// 相对路径
//	// FILE* pf = fopen("d:\\code\\test.txt", "w");// 绝对路径
//
//	// 没有找到会返回空指针，判断是否为空指针，如果是空指针就报错。
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件  fputc - 单个字符输出（写到文件中）
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "w");
//
//	// 判断
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 写文件
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;// 释放
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
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
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// 按照顺序写文本行
//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "w");
// 
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
// 
//	// 写文件 - 一行一行写
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
// 
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// 按照顺序读文本行
//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写文件 - 一行一行读，存到数组中
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

// 写一个结构体的数据
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "张三",20,95.5f };
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写文件
//	fprintf(pf, "%s %d %.2lf", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//读取一个结构体数据
struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct S s = {0};
	//把s中的数据写到文件中
	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	//读文件
	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));

	printf("%s %d %f\n", s.name, s.age, s.score);

	fclose(pf);
	pf = NULL;

	return 0;
}
