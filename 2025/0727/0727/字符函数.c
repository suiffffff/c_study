#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//#include "string.h"
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			*(char*)dest += 1;
//			*(char*)src += 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src+num);
//		}
//	}
//	return;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	size_t num = sizeof(arr) / sizeof(arr[0]);
//	my_memmove(arr+2,arr,num);
//	return 0;
//int main()
//{
//	char a = -128;
//	printf("%u", a);
//	return 0;
//}
#include "windows.h"
int main()
{
	unsigned char i= 9;
	for (i = 9;i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(100);
	}
	return 0; 
}