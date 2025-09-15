#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void Print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(p, sz);
//	return 0;
//}

//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int flag = 1;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <string.h>
//
//int leftround(char* str1, char* str2)
//{
//	size_t len = strlen(str1);
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 0;i < len-1;i++)
//	{
//		char temp = str1[0];
//		for (j = 0;j < len - 1;j++)
//		{
//			str1[j] = str1[j + 1];
//		}
//		str1[j] = temp;
//		if(strcmp(str1, str2) ==0) 
//		{
//			flag = 1; 
//		}
//	}
//	return flag;
//}
//int main()
//{
//	char str1[100] = "abcdefg";
//	char str2[100] = "bcdefga";
//	int flag = leftround(str1, str2);
//	if (flag)
//	{
//		printf("是\n");
//	}
//	else
//	{
//		printf("否\n");
//	}
//	return 0;
//}

//void Findnum(int arr[][3], int x, int y, int key)
//{
//	int i = 0;
//	int j = y - 1;
//	while (i < x && j >= 0)
//	{
//		if (arr[i][j] < key)
//		{
//			i++;
//		}
//		else if (arr[i][j] > key)
//		{
//			j--;
//		}
//		else
//		{
//			printf("找到了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int x = 3;
//	int y = 3;
//	int arr[x][y] = { {1,2,3},{4,5,6},{7,8,9} };
//	int key = 0;
//	scanf("%d", &key);
//	Findnum(arr,x,y,key);
//	return 0;
//}

//void Findkiller()
//{
//	int killer = 1;
//	for (killer = 1;killer <= 4;killer++)
//	{
//		if ((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4) == 3)
//		{
//			printf("杀手是%d\n", killer);
//		}
//	}
//}
//int main()
//{
//	Findkiller();
//	return 0;
//}

void YangHuiAngle(int arr[][4], int n)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j <= i;j++)
		{
			if (j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
}
int main()
{
	int arr[4][4] = { 0 };
	YangHuiAngle(arr, 4);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}