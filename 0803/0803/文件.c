#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, sizeof(int), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
int main()
{
	FILE* fp = fopen("test.txt", "w");
	if (fp == NULL)
	{
		perror("fopen");
		return 1;
	}
	int c = fgetc(fp);
	if (feof(fp))
	{
		printf("�����ļ���β\n");
	}
	else if (ferror(fp))
	{
		printf("��ȡ�ļ�����\n");
	}
	else
	{
		fputc(c, stdout);
	}
	fclose(fp);
	fp = NULL;
	return 0;
}