#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#define MAX 100
//#define DEBUG
int main()
{
#if MAX > 100
	printf("MAX is greater than 100\n");
#elif MAX == 100
	printf("MAX is not greater than 100\n");
#else
	printf("MAX is less than 100\n");
#endif
#if define(DEBUG)
	printf("Debug mode is enabled\n");
#else ifndef DEBUG
	printf("Debug mode is not enabled\n");
#else
	printf("Debug mode is not enabled\n");
#endif
	return 0;
}