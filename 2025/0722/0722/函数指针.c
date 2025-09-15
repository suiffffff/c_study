#define _CRT_SECURE_NO_WARNINGS 1
//#include "stdio.h"
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x/y;
//}
//int main()
//{
//	int(* parr[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0;i <= 4;i++)
//	{
//		printf("parr[%d] = %d\n", i, parr[i](9, 3));
//	}
//}
//void menu()
//{
//	printf("***********************************\n");
//	printf("**************0.exit***************\n");
//	printf("**************1.add****************\n");
//	printf("**************2.sub****************\n");
//	printf("**************3.mul****************\n");
//	printf("**************4.dev****************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	do
//	{
//		menu();	
//		printf("请输入你的选择:\n");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else if (input < 0 || input > 4)
//		{
//			printf("输入错误，请重新输入\n");
//			continue;
//		}
//		int(*parr[5])(int,int) = {NULL, Add, Sub, Mul, Div};
//		printf("请输入操作数:\n");
//		scanf("%d %d", &x, &y);
//		r = parr[input](x, y);
//		printf("结果是:%d\n", r);
//	} while (input);
//	return 0;
//}
//
//int (*signal(int n, int (*p)[4]))[4]
//{
//	return p;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//void test(int(*p)(int,int))
//{
//	int r = p(1, 2);
//	printf("r = %d\n", r);
//}
//int main()
//{
//	test(add);
//	return 0;
//}
//#include "stdlib.h"
//void printf_arr(int *arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp(const void *p1, const void *p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void test()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf_arr(arr,sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	printf_arr(arr,sz);
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include "stdlib.h"
//#include "string.h"
//struct stu
//{
//	char name[30];
//	int age;
//};
//int cmp_age(const void* p1, const void* p2)
//{
//	return (*(struct stu*)p1).age - (*(struct stu*)p2).age;
//}
//int cmp_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct stu*)p1)->name,((struct stu*)p2)->name);
//}
//void print_stu(struct stu* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("name: %s, age: %d\n", arr[i].name, arr[i].age);
//	}
//}
//int main()
//{
//	struct stu arr[5] = { {"zhangsan", 18}, {"lisi", 20}, {"wangwu", 22}, {"zhaoliu", 19}, {"tianqi", 21} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_age);
//	qsort(arr, sz, sizeof(arr[0]), cmp_name);
//	print_stu(arr, sz);
//	return 0;
//}
//struct stu
//{
//	char name[30];
//	int age;
//};
//void test(struct stu* p1)
//{
//	printf("name: %s, age: %d\n", p1->name, p1->age);
//}
//int main()
//{
//	struct stu s = { "zhangsan", 18 };
//	test(&s);
//	return 0;
//}
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct stu
{
	char name[30];
	int age;
};
void printf_arr(int* arr, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void printf_stu(struct stu* arr, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("name: %s, age: %d\n", arr[i].name, arr[i].age);
	}
	printf("\n");
}
cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
cmp_stu(const void* p1,const void* p2)
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}
void swap(char* num1, char* num2,size_t width)
{
	int i = 0;
	char tem = 0;
	for (i = 0;i < width;i++)
	{
		tem = *num1;
		*num1 = *num2;
		*num2 = tem;
		num1++;
		num2++;
	}
}
void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* p1, const void* p2))
{
	int i = 0, j = 0;
	for (i = 0;i < sz - 1;i++)
	{
		for (j = 0;j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
test1()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf_arr(arr, sz);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	printf_arr(arr, sz);
}
test2()
{
	struct stu arr[5] = { {"zhangsan", 18}, {"lisi", 20}, {"wangwu", 22}, {"zhaoliu", 19}, {"tianqi", 21} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf_stu(arr, sz);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu);
	printf_stu(arr, sz);
}
int main()
{
	//test1();
	test2();
	return 0;
}