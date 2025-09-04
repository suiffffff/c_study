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
void SeqListTest2()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	//SLInsert(&s1, 0, 99);
	//SLInsert(&s1, s1.size, 99);
	SLErase(&s1,0);
	SLPrint(s1);
	SLDestroy(&s1);
}
int main()
{
	/*SeqListTest1();*/
	SeqListTest2();
	return 0;
}