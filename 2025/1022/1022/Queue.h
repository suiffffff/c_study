#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int QDataType;
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QueueNode;
typedef struct Queue
{
	QueueNode* phead;
	QueueNode* ptail;
}Queue;

void QueueInit(Queue* pq); 
void QueuePush(QueueNode* pq, QDataType x);