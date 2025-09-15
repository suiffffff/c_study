#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** q = &p;
//	printf("%d\n", **q);
//	printf("%p",*q);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	const int* p = &a;
//	a = 20;
//	printf("%d\n", a); 
//	return 0;
//}
int main()
{
	int a = 10;
	int b = 5;
	int* p = &a;
	int** q = &p;
	*q = (int*) 0x00000055856ffc94;
	printf("%d", **q);
	return 0;
}