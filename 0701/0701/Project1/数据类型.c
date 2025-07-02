#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
//int main()
//{
//	printf(" %zu\n", sizeof(char));
//	printf(" %d\n", sizeof(short));
//	printf(" %d\n", sizeof(int));
//	printf(" %d\n", sizeof(long));
//	printf(" %d\n", sizeof(long long));
//	printf(" %d\n", sizeof(float));
//	printf(" %d\n", sizeof(double));
//	int age = 20;
//	double price = 66.6;
//	printf("age=%d\n", age);
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d", a);//局部优先
//	return 0;
//}
int main()
{
	int num1 = 0, num2 = 0;
	scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d", sum);
	return 0;

}