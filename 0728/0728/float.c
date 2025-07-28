#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//int main()
//{
//	int a = 9;
//	// 00000000 00000000 00000000 00001001
//	float* pfloat = (float*)&a;
//	// 0 00000000 00000000000000000001001
//	printf("%d\n", a);
//	printf("%f", *pfloat);
//	*pfloat = 9.0;
//	//1001.0
//	// s=0,m=2.002,e=3
//	// // 0 10000010 00100000000000000000000
//	return 0;
//}
//struct s
//{
//	int a;
//	char arr[20];
//};
//int main()
//{
//	struct s a = { 5,{"name"} };
//	struct s* p = &a;
//	printf("%p", p);
//}
//struct node {
//	int date;
//	struct node* next;
//};
//int main()
//{
//	struct node next1 = { 1,next2 };
//	struct node next2 = { 1,next3 };
//	struct node next3 = { 1,NULL };
//	return 0;
//}
#include <stddef.h>
struct s1
{
	char a;
	int b;
	char c;
};
struct s2
{
	char d;
	char e;
	int f;
};
int main()
{
	printf("%zu", offsetoff(struct s1,a));
	printf("%zu", offsetoff(struct s1,b));
	printf("%zu", offsetoff(struct s1,c));
	return 0;
}