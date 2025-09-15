#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "string.h"
struct stu
{
	char name[28];
	int age;
};
int main()
{
	struct stu s1;
	int i = 0;
	i = sizeof(s1);
	printf("sizeof(s1) = %d\n", i);
	char arr[] = { 'a','b','c' };
	size_t len = strlen(arr);
	printf("strlen(arr) = %zu\n", len);
	return 0;
}