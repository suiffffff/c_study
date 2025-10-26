#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"


void HPInit(HP* php)
{
	assert(php);
	php->arr = NULL;
	php->size = php->capacity = 0;
}
void HPDestroy(HP* php)
{
	assert(php);
	if (php->arr)
	{
 		free(php->arr);
	}
	php->arr = NULL;
	php->size = php->capacity = 0;
}
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void AdjustUp(HPDataType* arr, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (arr[child] > arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void AdjustDown(HPDataType* arr, int parent,int n)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child+1<n && arr[child] < arr[child + 1])
		{
			child++;
		}
		if (arr[child] > arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
bool HPEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
void HPPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newcapacity = php->capacity == 0 ? 4 : 2 * php->capacity;
		HPDataType* tmp = (HPDataType*)realloc(php->arr,newcapacity*sizeof(HPDataType));
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(1);
		}
		php->arr = tmp;
		php->capacity = newcapacity;
	}
	php->arr[php->size++] = x;
	AdjustUp(php->arr, php->size - 1);
}
void HPPop(HP* php)
{
	assert(!HPEmpty(php));
	Swap(&php->arr[0], &php->arr[--php->size]);
	AdjustDown(php->arr, 0, php->size);
}
HPDataType HPTop(HP* php)
{
	assert(!HPEmpty(php));
	return php->arr[0];
}
//void HeapSort(int* arr, int n)
//{
//	HP hp;
//	HPInit(&hp);
//	for (int i = 0; i < n; i++)
//	{
//		HPPush(&hp,arr[i]);
//	}
//	int i = 0;
//	while (!HPEmpty(&hp))
//	{
//		HPDataType top = HPTop(&hp);
//		arr[i++] = top;
//		HPPop(&hp);
//	}
//	HPDestroy(&hp);
//
//}
void HeapSort(int* arr, int n)
{
	for (int i =  (n-2)/2;i>=0; i--)
	{
		AdjustDown(arr, i, n);
	}
}
void HPPrint(HP* php)
{
	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->arr[i]);
	}
	printf("\n");
}