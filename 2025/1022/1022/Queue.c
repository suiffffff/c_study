#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = NULL;
	pq->ptail = NULL;
}
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode==NULL)
	{
		perror("malloc failed");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
	if (pq->phead == NULL)
	{
		pq->phead = pq->ptail = newnode;
	}
	else
	{
		pq->ptail->next = newnode;
		pq->ptail = newnode;
	}
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->phead == NULL;
}
void QueuePop(Queue* pq)
{
	assert(!QueueEmpty(pq));
	if (pq->phead == pq->ptail)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	else
	{
		QueueNode* next = pq->phead->next;
		free(pq);
		pq->phead = next;
	}
}
QDataType QueueFront(Queue* pq)
{
	assert(!QueueEmpty(pq));
	return pq->phead->data;
}
QDataType QueueBack(Queue* pq)
{
	assert(!QueueEmpty(pq));
	return pq->ptail->data;
}
int QueueSize(Queue* pq)
{
	assert(pq);
	int size = 0;
	QueueNode* pcur = pq->phead;
	while (pcur)
	{
		size++;
		pcur = pcur->next;
	}
	return size;
	//return pq->size;
}
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QueueNode* pcur = pq->phead;
	while (pcur)
	{
		QueueNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	pq->phead = pq->ptail = NULL;
}