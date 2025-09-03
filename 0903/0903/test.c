#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void SeqListTest1()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPrint(sl);
	SLPushFront(&sl, 0);
	SLPrint(sl);
	SLPopBack(&sl);
	SLPrint(sl);
	SLPopFront(&sl);
	SLPrint(sl);
	SLDestroy(&sl);
}

int main()
{
	SeqListTest1();
	return 0;
}