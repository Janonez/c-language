#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	// ���ļ�
	FILE* pf = fopen("text.txt", "w");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	// д�ļ�
	fputc('a', pf);
	fputc('b', pf);
	fputc('c', pf);

	// �ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}