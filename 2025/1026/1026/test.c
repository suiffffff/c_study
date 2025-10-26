#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void test01()
{
	HP hp;
	HPInit(&hp);
	HPPush(&hp, 10);
	HPPush(&hp, 30);
	HPPush(&hp, 40);
	HPPush(&hp, 80);
	HPPush(&hp, 70);
	HPPush(&hp, 60);
	HPPush(&hp, 20);
	HPPrint(&hp);
	while (!HPEmpty(&hp))
	{
		HPDataType top = HPTop(&hp);
		printf("%d ", top);
		HPPop(&hp);
	}
	printf("\n");
}
int main()
{
	test01();
	int arr[10] = { 2,4,6,8,10,1,3,5,7,9 };
	HeapSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}