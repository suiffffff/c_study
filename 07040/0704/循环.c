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
//	printf("请输入一个年份：");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int a = 0;
//	printf("请输入任意一个整数");
//	scanf("%d", &a);
//	if (a % 3 == 0)
//		printf("%d能被3整除\n", a);
//	else if  (a%3==1)
//		printf("%d除以3余1\n", a);
//	else
//		printf("%d除以3余2\n", a);
//	switch (a % 3)
//	{
//		case 0:
//			printf("%d能被3整除\n", a);
//			break;
//		case 1:
//			printf("%d除以3余1\n", a);
//			break;
//		case 2:
//			printf("%d除以3余2\n", a);
//			break;
//	}
//	return 0;
//}
#include "stdio.h"
int main()
{
	char ch = "48";
	//scanf("%c", &ch);
	printf("你输入的字符是：%d\n", ch);
	switch (ch)
	{
		case 'a':
			printf("你输入的是字母A\n");
			break;
		case 'b':
			printf("你输入的是字母B\n");
			break;
		case 'c':
			printf("你输入的是字母C\n");
			break;
		default:
			printf("你输入的不是字母A、B、C\n");
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
//521输出125
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