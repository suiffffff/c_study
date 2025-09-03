#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int Add(int a, int b) 
//{
//	return a + b;
//}
//int Sub(int a, int b) 
//{
//	return a - b;
//}
//int Mul(int a, int b) 
//{
//	return a * b;
//}
//int Div(int a, int b) 
//{
//	if (b == 0) {
//		fprintf(stderr, "Error: Division by zero.\n");
//		return 0; // or handle error appropriately
//	}
//	return a / b;
//}
//
//void menu()
//{
//	printf("请选择:\n");
//	printf("1. Add\n");
//	printf("2. Subtract\n");
//	printf("3. Multiply\n");
//	printf("4. Divide\n");
//	printf("0. Exit\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		if(input == 0) 
//		{
//			printf("退出\n");
//			return 0;
//		}
//		else if(input < 0 || input > 4) 
//		{
//			printf("无效的选择，请重新输入。\n");
//			continue; 
//		}
//		else
//		{
//			printf("请输入两个数: ");
//			scanf("%d %d", &x, &y);
//		}
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("无效的选择，请重新输入。\n");
//			break;
//		}
//	} while (input);
//}

//print_arr(int* arr, int sz)
//{
//	for(int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 3, 1, 2, 6, 4, 7, 5, 9, 8, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr,sz);
//	return 0;
//}
//struct stu {
//	char name[20];
//	int age;
//};
//int cmp_name(const void* p1,const void* p2)
//{
//		return strcmp (((struct stu*)p1)->name, ((struct stu*)p2)->name);
//}
//void print_name(struct stu* arr, int sz)
//{
//	for(int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", arr[i].name, arr[i].age);
//	}
//}
//
//int main()
//{
//	struct stu arr[] = { {"zhangsan",20},{"lisi",21},{"wangwu",19} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_name);
//	print_name(arr, sz);
//}
//int cmp_int(const void* p1,const void* p2)
//{
//	if(*(int*)p1>*(int*)p2)
//		return 1;
//	else if(*(int*)p1 < *(int*)p2)
//		return -1;
//	else
//		return 0;
//}
//Swap(char* buf1,char* buf2,size_t size)
//{
//	int i = 0;
//	for (i = 0;i < size;i++)
//	{
//		char temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	}
//}
//void my_qsort(void* base,size_t num,size_t size , int (*cmp)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < num;i++)
//	{
//		for (j = 0;j < num-1-i;j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				Swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3, 1, 2, 6, 4, 7, 5, 9, 8, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
struct stu {
	char name[20];
	int age;
};
int cmp_name(const void* p1, const void* p2)
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}
void Swap(char* buf1, char* buf2, size_t size)
{
	int i = 0;
	for (i = 0;i < size;i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void my_qsort(void* base, size_t num, size_t size, int (*cmp) (const void*, const void*))
{
	int i = 0;
	int j = 0;
	for (i = 0;i < num;i++)
	{
		for (j = 0;j < num - 1 - i;j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				Swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
			}
		}
	}
}
int main()
{
	struct stu arr[] = { {"zhangsan",20},{"lisi",21},{"wangwu",19} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), cmp_name);
	for (int i = 0; i < sz; i++)
	{
		printf("%s %d\n", arr[i].name, arr[i].age);
	}
	return 0;
}