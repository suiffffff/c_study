#define _CRT_SECURE_NO_WARNINGS 1
//#include "stdio.h"
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	if(a == b)
//		printf("hehe\n");
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d", &a);
//	b = (a >= 5 ? 3 : -3);
//	printf("%d\n", b);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int year = 0;
//	printf("������һ����ݣ�");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int a = 0;
//	printf("����������һ������");
//	scanf("%d", &a);
//	if (a % 3 == 0)
//		printf("%d�ܱ�3����\n", a);
//	else if  (a%3==1)
//		printf("%d����3��1\n", a);
//	else
//		printf("%d����3��2\n", a);
//	switch (a % 3)
//	{
//		case 0:
//			printf("%d�ܱ�3����\n", a);
//			break;
//		case 1:
//			printf("%d����3��1\n", a);
//			break;
//		case 2:
//			printf("%d����3��2\n", a);
//			break;
//	}
//	return 0;
//}
#include "stdio.h"
int main()
{
	char ch = "48";
	//scanf("%c", &ch);
	printf("��������ַ��ǣ�%d\n", ch);
	switch (ch)
	{
		case 'a':
			printf("�����������ĸA\n");
			break;
		case 'b':
			printf("�����������ĸB\n");
			break;
		case 'c':
			printf("�����������ĸC\n");
			break;
		default:
			printf("������Ĳ�����ĸA��B��C\n");
			break;
	}
	return 0;
}
//#include "stdio.h"
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		a++;
//		printf("%d\n", a);
//	}
//	return 0;
//}
//521���125
//#include "stdio.h"
//int main()
//{
//	int a = 521;
//	whlie(a = 0)
//	{
//
//	}
//	return 0;
//}