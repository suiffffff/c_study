#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* arr;
	int size;
	int capacity;
}HP;

void HPInit(HP* php);
void HPDestroy(HP* php);
void HPPush(HP* php, HPDataType x);
void HPPop(HP* php);
HPDataType HPTop(HP* php);
void HeapSort(int* arr, int n);
void AdjustUp(HPDataType* arr, int child);
void AdjustDown(HPDataType* arr, int parent, int n);

bool HPEmpty(HP* php);
void HPPrint(HP* php);