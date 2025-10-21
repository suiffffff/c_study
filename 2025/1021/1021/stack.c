#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

void STInit(ST* ps)
{
	ps->arr = NULL;
	ps->capacity = ps->top= 0;
}
void STDestroy(ST* ps)
{
	if (ps->arr)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->capacity = ps->top = 0;
}
void STPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top== ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		STDataType* tmp = (STDataType*)realloc(ps->arr,newcapacity * sizeof(STDataType));
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newcapacity;
	}
	ps->arr[ps->top++] = x; 
}
bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
void STPop(ST* ps)
{
	assert(!STEmpty(ps));
	ps->top--;
}
STDataType STTop(ST* ps)
{
	assert(!STEmpty(ps));
	return ps->arr[ps->top - 1];
}
int STsize(ST* ps)
{
	assert(!STEmpty(ps));
	return ps->top;
}