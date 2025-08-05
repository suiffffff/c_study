#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
struct S {
	char name[20];
	int age;
	float score;
};
//int main()
//{
//	struct S s = { "zhangsan", 20, 99.5 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int r = fread(&s, sizeof(struct S), 1, pf);
//	if (r != 1)
//	{
//		if(feof(pf))
//		{
//			printf("End of file reached.\n");
//		}
//		else
//		{
//			perror("fread");
//			fclose(pf);
//			return 1;
//		}
//	}
//	printf("%s\n%d\n%f", s.name,s.age,s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
////}
//int main()
//{
//	struct S s = { "zhangsan", 20, 99.5f };
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %f\n", s.name, s.age, s.score);
//	printf("%s", buf);
//	struct S t = { 0 };
//	sscanf(buf,"%s %d %f",t.name,&t.age,&t.score);
//	printf("%s\n%d\n%f", t.name, t.age, t.score);
//	return 0;
//}
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if(pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	int ch = fgetc(pf);
	printf("%c\n", ch);
	///*fseek(pf, 5, SEEK_SET);*/
	//fseek(pf, 4, SEEK_CUR);
	fseek(pf, -5, SEEK_END);
	ch = fgetc(pf);
	printf("%c\n", ch);
	return 0;
}
