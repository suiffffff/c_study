#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void Fun(char arr[], int sz)
//{
//    int i = 0;
//    for (i = sz;i > 1;i--)
//    {
//        printf("%c", arr[i]);
//    }
//}
//int main()
//{
//    int i = 0;
//    char arr[100];
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0;i < sz;i++)
//    {
//        scanf("%s", arr);
//        if(arr[i] == '\n')
//        {
//            break;
//		}
//    }
//    Fun(arr, sz);
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void Fun(char arr[])
//{
//	int sz = strlen(arr);
//	int i = 0;
//	for (i = sz;i >= 0;i--)
//	{
//		printf("%c", arr[i]);
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[10001] = "";
//	for (i = 0;;i++)
//	{
//		scanf("%c", arr + i);
//		if (arr[i] == '\n')
//		{
//			break;
//		}
//	}
//	Fun(arr);
//	return 0;
//}
//#include <stdio.h>
//void Fun(char* p1, char*  p2,int sz)
//{
//	char* ptmp1 = p1;
//	char* ptmp2 = p2;
//	int num = 1;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &i);
//	for (num = 1;num <= i;num++)
//	{
//		ptmp1 = p1;
//		ptmp2 = p2;
//		for (j = 0;j < sz;j++)
//		{
//			if(p2[j] == '\0')
//			{
//				break;
//			}
//			char tmp = 0;
//			tmp = *ptmp2;
//			*ptmp2 = *ptmp1;
//			*ptmp1 = tmp;
//			ptmp1++;
//			ptmp2++;
//		}
//	}
//}
//int main()
//{
//	char arr[100] = "ABCD";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Fun(arr, arr + 1,sz);
//	printf("%s", arr);
//	return 0;
//}
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "asdsadsad";
//	size_t len = my_strlen(arr);
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//
//void Fun(int arr[], int sz)
//{
//	int* left = arr;
//	int* right = arr + sz - 1;
//
//	while (left < right)
//	{
//		while (((left < right) && (*left) % 2 != 0))
//		{
//			left++;
//		}
//		while (((left < right) && (*right) % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int i = 0;
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	Fun(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//ÊÓÆµ·½·¨
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void Reserve(char* str)
//{
//	int len = strlen(str);
//	int left = 0;
//	int right = len - 1;
//	while(left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[10001] = { 0 };
//	while(gets(str))
//	{
//		Reserve(str);
//		printf("%s\n", str);
//	}
//	return 0;
//}

void leftround1(char* str, int k)
{
	size_t len = strlen(str);
	int time = k % len; 
	int i = 0;
	int j = 0;
	for (i = 0;i < time;i++)
	{
		char temp = str[0];
		for (j = 0;j < len - 1;j++)
		{
			str[j] = str[j + 1];
		}
		str[j] = temp;
	}
}

void leftround(char* str, int k)
{
	int len = strlen(str);
	int time = k % len;
	char tmp[256] = { 0 };
	strcpy(tmp, str + time);
	strncat(tmp, str, time);
	strcpy(str, tmp);
}
int main()
{
	int k = 0;
	char str[100] = { 0 };
	while (gets(str))
	{
		scanf("%d", &k);
		leftround(str, k);
		printf("%s\n", str);
	}
	return 0;
}
 