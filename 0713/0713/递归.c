#define _CRT_SECURE_NO_WARNINGS 1
#include "函数.h"
//#include "stdio.h"
//int main()
//{
//	printf("Hello, World!\n");
//	main();
//	return 0;
//}
int main()
{
	int n;
	printf("请输入你想算的阶乘：\n");
	scanf("%d", &n);
	printf("结果是：%d\n", Sum(n));
}