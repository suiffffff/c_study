#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//int main()
//{
//	int arr[] = { 0 };
//	int(*p)[10] = &arr;
//	return 0;
//}
//void test(int(*arr)[5], int a, int b)
//{
//	int i = 0, j = 0;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%d ", (*(arr+i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	test(arr, 3, 5);
//	return 0;
//}
//int Add(int x ,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10, b = 20;
//	int (*p)(int, int) = Add; 
//	int result = p(a, b); 
//	printf("Result: %d\n", result);
//	return 0;
//}
//typedef unsigned int uint;
//typedef int (*p5)[5];
//typedef int(*p2)(int, int);
//int main()
//{
//	uint a = 123;
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	p5 p = &a; 
//	return 0;
//}
typedef void(*p)(int);
int main()
{
	void(*signal(int, void(*)(int)))(int);
	p signal(int,p);
	return 0;
}
void(*signal(int n, void(*p)(int)))(int)
{

}