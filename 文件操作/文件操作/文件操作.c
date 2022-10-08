#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	// 打开文件
	FILE* pf = fopen("text.txt", "w");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	// 写文件
	fputc('a', pf);
	fputc('b', pf);
	fputc('c', pf);

	// 关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}