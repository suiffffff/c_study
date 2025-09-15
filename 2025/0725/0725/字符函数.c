#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "assert.h"
//char* my_strstr(const char* str1, const char* str2)
//{
//	assret(str1, str2);
//	char* p = str1;
//	char* s1 = NULL;
//	char* s2 = NULL;
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = { "abbbcdef" };
//	char arr2[] = { "bbc" };
//	char* r = my_strstr(arr1, arr2);
//	if (r != NULL)
//	{
//		printf("找到了,%s", r);
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}
//#include "string.h"
//int main()
//{
//	char arr1[100] = "waiwai.shi.dahuaidan@qq.com";
//	char arr2[] = "@.";
//	char* i = NULL;
//	for (i = strtok(arr1, arr2);i != NULL;i = strtok(NULL, arr2))
//	{
//		printf("%s\n", i);
//	}
//	return 0;
//}
//#include "string.h"
//int main()
//{
//	printf("查询歪歪旅游进程\n");
//	printf("%s", strerror(3));
//	return 0;
//}
//#include "string.h"
//int main()
//{
//	FILE* pf = fopen("歪歪大脑.exe", "r");
//	if (pf == (NULL))
//	{
//		perror("歪歪大脑");
//		printf("歪歪大脑未响应");
//		return 1;
//	}
//	else
//	{
//		printf("歪歪正在思考");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#include "string.h"
//int main()
//{
//	float arr1[] = { 1.1f,2.2f,3.3f,4.4f,5.5f };
//	float arr2[20] = { 0 };
//	memcpy(arr2, arr1, 16);
//	printf("%f", arr2);
//	return 0;
//}
void* my_memcpy(void* arr1, void* arr2, size_t num)
{
	while (num--)
	{
		*(char*)arr1 = *(char*)arr2;
		arr1 = (char*)arr1 + 1;
		arr2 = (char*)arr2 + 1;
	}
}
int main()
{
	int arr1[] = {0,1,2,3,4,5,6,7,8,9};
	int arr2[20] = { 0 };
	size_t num = sizeof(arr1);
	my_memcpy(arr2, arr1, num);

	return 0;
}