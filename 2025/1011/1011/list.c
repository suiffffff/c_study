#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

LTNode* LTBuyNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc failed");
		exit(1);
	}
	newnode->data = x;
	newnode->next = newnode;
	newnode->prev = newnode;
	return newnode;
}
//void LTInit(LTNode** pphead)
//{
//	*pphead = LTBuyNode(-1);
//} 
LTNode* LTInit()
{
	LTNode* phead = LTBuyNode(-1);
	return phead;	
}
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	newnode->next = phead;
	newnode->prev = phead->prev;
	phead->prev->next = newnode;
	phead->prev = newnode;
}
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	newnode->next = phead->next;
	newnode->prev = phead;
	phead->next->prev = newnode;	
	phead->next= newnode; 
}
bool LTEmpty(LTNode* phead)
{
	assert(phead);
	if (phead->next == phead->prev)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void LTPopBack(LTNode* phead)
{
	assert(LTEmpty(phead));
	LTNode* del = phead->prev;
	del->prev->next = phead;
	phead->prev = del->prev;
	free(del);	
	del = NULL;
}
void LTPopFront(LTNode* phead)
{
	assert(LTEmpty(phead));
	LTNode* del = phead->next;
	phead->next = del->next;
	del->next->prev = phead;
	free(del);
	del = NULL;
}

LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(LTEmpty(phead));
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}

void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = LTBuyNode(x);
	newnode->prev = pos;
	newnode->next = pos->next;
	pos->next->prev = newnode;
	pos->next = newnode;
}
void LTErase(LTNode* pos)
{
	assert(pos);
	LTNode* del = pos->next;
	pos->next = del->next;
	pos->next->prev = pos;
	free(del);
	del = NULL;
}

void LTPrint(LTNode* phead)
{	assert(LTEmpty(phead));
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("\n");
}

void LTDestroy(LTNode* phead)
{
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		LTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	free(pcur);
	pcur = NULL;
}
//void LTDestroy(LTNode** pphead)
//{ 
//	LTNode* pcur = (*pphead)->next;
//	while (pcur != *pphead)
//	{
//		LTNode* next = pcur->next;
//		free(pcur);
//		pcur = next;
//	}
//	free(pcur);
//	pcur = NULL;
//}
