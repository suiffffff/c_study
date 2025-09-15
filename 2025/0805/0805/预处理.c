#define _CRT_SECURE_NO_WARNINGS 1
#define PRINT(n,format) printf("the value of" #n "is" format"\n",n)
#include "stdio.h"
int main()
{
	int a = 10;
	PRINT(a, "%d");
	return 0;
}