#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

void Test01()
{
	LTNode* plist = NULL;
	//LTInit(&plist);
	LTNode* phead = LTInit();
	LTPushFront(plist, 1);
	LTPushFront(plist, 2);
	LTPushFront(plist, 3);
	LTPushFront(plist, 4);
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPrint(plist);
	LTNode* pos = LTFind(plist,3);
	LTErase(pos);
	if (pos != NULL)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	LTPrint(plist);
	LTDestroy(phead);
	plist=NULL:
	/*LTPopBack(plist);
	LTPopBack(plist);
	LTPopBack(plist);
	LTPopBack(plist);
	LTPopBack(plist);
	LTPrint(plist);*/
}
int main()
{
	Test01();
	return 0;
}