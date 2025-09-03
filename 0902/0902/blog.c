#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a =  0 ;
//	int* p = &a;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]+1);
//	printf("arr = %p\n", arr+1);
//	printf("arr + 1 = %p\n"	,&arr + 1);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	
//	int* p = arr;
//	printf("%d\n", *(p + 1));
//	printf("%d\n", *(arr + 1));
//	printf("%d\n", p[1]);
//	printf("%d\n", arr[1]);
//	return 0;
//}
//void test(int arr[])
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1 = %d\n", sz1);
//	test(arr);
//	return 0;
//}
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	printf("%p", arr);
	return 0;
}