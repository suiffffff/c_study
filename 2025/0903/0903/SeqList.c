#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SLDestroy(SL* ps)
{
	if(ps != NULL)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SLPrint(SL s)
{
	for(int i = 0; i < s.size; i++)
	{
		printf("%d ", s.arr[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* ps)
{
	if(ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SL* tmp = (SLDataType*)realloc(ps->arr, sizeof(SLDataType) * newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newcapacity;
	}
}
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x; 
}

void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	for(int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}

void SLPopBack(SL* ps)
{
	assert(ps && ps->size != 0);
	ps->size--;
}
void SLPopFront(SL* ps)
{
	assert(ps && ps->size != 0);
	for(int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps && pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	for (int i = ps->size;i > pos;i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}
void SLErase(SL* ps, int pos)
{
	assert(ps && pos >= 0 && pos < ps->size);
	for (int i = pos;i < ps->size - 1;i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0;i < ps->size;i++)
	{
		if (ps->arr[i] == x)
			return i;
	}
	return -1;
}