#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int* test()
//{
//	int n = 100;
//	return &n;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int* p1 = &num;
//	int* p2 = NULL;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p++) = i;
//	}
//	p = NULL;
//	p = &arr[0];
//	if (p != NULL)
//	{
//
//	}
//	return 0;
//}
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = % d b = % d\n", a, b);
//	Swap1(a, b);
//	printf("交换后：a = % d b = % d\n", a, b);
//	return 0;
//}
void Swap2(int* px, int* py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	Swap2(&a, &b);
	printf("交换前：a = % d b = % d\n", a, b);
	printf("交换后：a = % d b = % d\n", a, b);
	return 0;
}
