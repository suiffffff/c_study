#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int n = num >> 1;
//	printf("n= %d\n", n);
//	printf("num= %d\n", num);
//	return 0;
//}
//int main()
//{
//	int i = 7;
//	int ret = (7 >> 2) & 1;
//	printf("%d", ret);
//	return 0;
//}
int main()
{
	int a = 10;
	int num = 0;
	while (a )
	{
		a = a & (a - 1);
		num++;
	}
	printf("%d", num);
	return 0;
}