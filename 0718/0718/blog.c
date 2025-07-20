#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	int* q = &p;
	int* m = &q;
	printf("%zu\n", *q);
}