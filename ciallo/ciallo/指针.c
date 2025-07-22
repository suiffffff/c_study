#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//int main()
//{
//	int arr[] = { 0 };
//	int(*p)[10] = &arr;
//	return 0;
//}
void test(int(*arr)[5], int a, int b)
{
	int i = 0, j = 0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ", *(arr+i)[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	test(arr, 3, 5);
	return 0;
}