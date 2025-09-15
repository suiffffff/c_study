#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	for (b = 0;b < 10;b++)
//	{
//		scanf("%d", &a);
//		c += a;
//	}
//	float average = (float)c / 10;
//	printf("%f\n", average);
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int a = 0;
//	int tmp = 0;
//	for (a = 0;a < 5;a++)
//	{
//		arr1[a] = tmp;
//		arr1[a] = arr2[a];
//		arr2[a] = tmp;
//	}
//	return 0;
//}
//int bin_search(int arr[], int left, int right, int key)
//{
//	while(left<= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//			right = mid - 1;
//		else if (arr[mid] < key)
//			left = mid + 1;
//		else
//			return mid;
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 0;
//	scanf("%d", &key);
//	int ret = bin_search(arr, 0, 9, key);
//	printf("%d\n", arr[ret]);
//	return 0;
//}
//int chengfa(int i)
//{
//	int a = 0, b = 0;
//	for (a = 1;a <= i;a++)
//	{
//		for (b = 1;b <= i;b++)
//		{
//			printf("%d*%d=%d ", a, b, a * b);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0, b = 0;
//	int i = 0;
//	scanf("%d", &i);
//	chengfa(i);
//	return 0;
//}
//int judge(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int judge(year);
//	return 0;
//}
//int is_prime(int num)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 2; i < num;i++)
//	{
//		if (num % i != 0)
//		{
//			continue;
//		}
//		else
//		{
//			flag = 0;
//			printf("%d不是素数\n",num);
//			return 0;
//		}
//	}
//	if (flag)
//	{
//		printf("%d是素数\n",num);
//		return 1;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	is_prime(num);
//	for(num=100;num <= 200;num++)
//	{
//		(is_prime(num));
//	}
//	return 0;
//}
void intt(int* arr, int sz)
{
	int i = 0;
	for(i = 0;i <sz;i++ )
	{
		arr[i] = i;
	}
}
void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d", arr[i]);
	}
}
reverse(int* arr, int sz)
{
	int i = sz-1;
	for(i=sz-1;i>= sz/2; i--)
	{
		int tmp = arr[i];
		arr[i] = arr[sz - i-1];
		arr[sz - i-1] = tmp;
	}
	printf("\n");
	print(arr, sz);
}
int main()
{
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	intt(arr,sz);
	print(arr,sz);
	reverse(arr, sz);
	return 0;
}