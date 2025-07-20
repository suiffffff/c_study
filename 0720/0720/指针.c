#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//#include "assert.h"
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//p = NULL; 
//	assert(p != NULL); 
//	printf("a = %d\n", *p);
//	return 0;
//}
//#include "string.h"
//#include "assert.h"
//size_t my_strlen(const char* str)
//{
//	assert(str == NULL);
//	size_t length = 0;
//	while (*str != '\0') 
//	{
//		length++;
//		str++;
//	}
//	return length;
//}	
//int main()
//{
//	char arr = "abcdef";
//	size_t len = my_strlen(arr);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	printf("%p\n", &arr+2);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz; i++)
//	{
//		printf("%d ", i[arr]);// *(i + arr) == *(arr + i) == arr[i]
//	}
//		return 0;
//}
#include "stdio.h"
void compare(int arr[], int sz)
{
	int i = 0;
	for(i=0;i<sz;i++)
	{
		int j = 0;
		int flag = 1;
		for(j=0;j<sz-1;j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 2,7,3,8,9,10,4,5,6,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	compare(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}