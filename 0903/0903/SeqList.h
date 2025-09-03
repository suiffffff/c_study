#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;

void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL s);

void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

void SLPopBack(SL* ps);
void SLPopFront(SL* ps);
