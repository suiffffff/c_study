#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void FindNum(int arr[],int len,int* pnum1,int* pnum2)
{
	int i = 0;
	int tmp = 0;
	int pos = 0;
	for (i = 0;i < len;i++)
	{
		tmp ^= arr[i];
	}
	for (i = 0;i < 32;i++)
	{
		if ((tmp >> i) & 1)
		{
			pos = i;
			break;
		}
	}
	for (i = 0;i < len;i++)
	{
		if((arr[i] >> pos) & 1)
		{
			*pnum1 ^= arr[i];
		}
		else
		{
			*pnum2 ^= arr[i];
		}
	}
}
int main()
{
	int a = 0;
	int b = 0;
	int arr[] = { 1,1,2,2,3,3,5,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	FindNum(arr, len, &a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
