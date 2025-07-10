#define _CRT_SECURE_NO_WARNINGS 1
//#include "stdio.h"
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	add(a, b);
//	printf("The sum is: %d\n", add(a, b));
//}
//#include "stdio.h"
//#include "stdbool.h"
//#include "add.h"
//
//bool is_leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return true;
//	else
//		return false;
//}
//
//int dat_get_month(int year, int month)
//{
//	int day[] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if (is_leap_year(year))
//		day[2] = 29;
//	return day[month];
//}
//
//int main()
//{
//	printf("请输入年份与月份：");
//	int year = 0, month = 0;
//	scanf("%d %d", &year, &month);
//	printf("%d年%d月有%d天\n", year, month, dat_get_month(year, month));
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		static int j = 0;
//		j++;
//		printf("%d", j);
//	}
//	return 0;
//}
//#include "stdio.h"
//extern int add(int x, int y);
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}