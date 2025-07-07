#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int sushu[1000] = { 2 };
//	int i = 0, a = 0, b = 0, c = 0;
//	for (i = 3;i <= 20;i += 2)
//	{
//		for (a = 0;1;a++)
//		{
//			b = 1;
//			if (sushu[a] == 0)
//			{
//				break;
//			}
//			else if (i % sushu[a] == 0)
//			{
//				b = 0;
//				break;
//			}
//		}
//		if (b == 1)
//		{
//			c++;
//			printf("%d是素数，请输入;", i);
//			scanf("%d,", &sushu[c]);
//		}
//		
//	}
//	printf("1-20的素数为:");
//	int d = 0;
//	for(d=0;d<=c;d++)
//	{
//		if (sushu[d] != 0)
//		{
//			printf("%d ", sushu[d]);
//		}
//	}
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//		printf("%d", arr[i]);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int i = 0;
//	int arr[3][5] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;		
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %d\n",i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (scanf("%d %d", &a, &b) != -1)
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    return 0;
//}
//#include "stdio.h"
//#include "string.h"
//#include "windows.h"
//int main()
//{
//	char arr1[] = "邪恶的爽歪歪要来吃人了";
//	char arr2[] = "######################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
#include "stdio.h"
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入你要查找的数字：");
	scanf("%d", &k);
	int left = 0, right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
			printf("找到了，下标为：%d\n", mid);
	}
	if (left > right)
		printf("没有找到\n");
	return 0;
}