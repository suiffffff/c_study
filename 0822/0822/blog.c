#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("Hello, World!\n");
//	main();
//	return 0;
//}

//int F(int x)
//{
//	if (x <= 0)
//	{
//		return 0;
//	}
//	if (x > 0)
//	{
//		return x + F(x - 2);
//	}
//}
//	
//int main()
//{
//	int x = 10;
//	int ret = F(x);
//	printf("%d\n", ret);
//	return 0;
//}
//int Factorial(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return n * Factorial(n - 1);
//}
int main()
{
	int i = 1;
	int ret = 1;
	int n = 0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		ret *=  i;
	}
	printf("%d\n", ret);
}