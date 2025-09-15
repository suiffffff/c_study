#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str++)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	return 0;
//}
//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//#include <assert.h>
//char* mt_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//
//}
//char* mt_strncpy(char* dest,char* src,size_t num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest && *src && num--)
//	{
//		*dest++ = *src++;
//	}
//	if (num > 0)
//	{
//		while (num--)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return ret;
//}
//char* my_strcat(char* dest,const char* src, int num)
//{
//	int i = 0;
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (i < num && *src != '\0')
//	{
//		*dest++ = *src++;
//		i++;
//	}
//	*dest++ = '\0';
//	return ret;
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	if(*str2 == '\0')
//	{
//		return str1;
//	}
//	for(; *str1 != '\0'; str1++)
//	{
//		char* p1 = str1;
//		char* p2 = str2;
//		while (*p1 == *p2 && *p2 != '\0')
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return str1;
//		}
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "deaf";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}
void* my_memcpy(void* dest, const void* src, size_t num)
{
	while(num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
}