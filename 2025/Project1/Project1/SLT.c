#define _CRT_SECURE_NO_WARNINGS 1
#include "SLT.h"

SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc failed");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}
void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur != NULL)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* ptail = *pphead;
		while (ptail != NULL)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
}
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead && *pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	SLTNode* ptail = *pphead;
	SLTNode* prev = NULL;
	while (ptail != NULL)
	{
		prev = ptail;
		ptail = ptail->next;
	}
	prev->next = NULL;
	free(ptail);
	ptail = NULL;
}
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* pnext = (*pphead)->next;
	free(*pphead);
	*pphead = pnext;
}
SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	assert(phead);
	SLTNode* pcur = phead;
	while (pcur)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}
void SLTInsert(SLTNode** pphead,SLTNode* pos,SLTDataType x)
{
	assert(pphead && pos);
	SLTNode* newnode = SLTBuyNode(x);
	SLTNode* prev = *pphead;
	if (*pphead == pos)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}
void SLTInsertAfter(SLTNode* phead, SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	SLTNode* prev = phead;
	newnode->next = pos->next;
	pos->next = newnode;
}
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead && pos);
	if (*pphead = pos)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}
void SLTEraseAfter(SLTNode* phead, SLTNode* pos)
{
	assert(pos);
	SLTNode* del = pos->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}
void SLTDestroy(SLTNode** pphead)
{
	assert(pphead);
	SLTNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur= next;
	}
	*pphead = NULL;
}