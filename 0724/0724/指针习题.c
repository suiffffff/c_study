#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//int main()
//{
//	char c = 'a';
//	char b = 'b';
//	char* p1 = &c;
//	char* p2 = &b;
//	char* a[] = {p1,p2};
//	char** p = a;
//	//p++;
//	printf("%c\n", **p+1); 
//	return 0;
//}
////int main()
//{
//	char arr[] = { "hello,world" };
//	char* p = arr;
//	printf("%s\n", p);
//	return 0;
//}
//#include "ctype.h"
//int main()
//{
//	int r = isdigit('1');
//	printf("%d\n", r);
//	if(islower('a'))
//	{
//		printf("小写字母\n");
//	}
//	else
//	{
//		printf("非小写字符\n");
//	}
//	return 0;
//}
//#include"ctype.h"
//int main()
//{
//	int i = 0;
//	char arr[] = { "HeLLo WOrld." };
//	while (arr[i])
//	{
//		if (islower (arr[i]))
//		{
//			arr[i] -= 32;
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//#include "ctype.h"
//int main()
//{
//	int rA = toupper('a');
//	int ra = tolower('A');
//	printf("%c\n %c\n", rA,ra);
//	return 0;
//}
//#include "assert.h"
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL); 
//	if(*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = { "hello,world" };
//	size_t len = my_strlen(arr);
//	printf("字符串长度为：%zu\n", len);
//	return 0;
//}
//#include "ctype.h"
//#include "string.h"
//int main()
//{
//	char arr[] = { "hello,world" };
//	char arr2[20] = { 0 };
//	char* ret = strcpy(arr2, arr);
//	printf("arr2 = %s\n", arr2);
//	printf("arr2 = %s\n", ret);
//	return 0;
//}
#include "string.h"
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	while (*dest++ != '\0')
	{
		while (*dest++ = *src++)
		{
			; 
		}
	}
	return dest;
}
int main()
{
	char arr1[30] = { "hello\0xxxxxxx" };
	char arr2[] = { "world" };
	char* r = my_strcat(arr1, arr2);
	printf("%s\n%s", arr1, r);
	return 0;
}