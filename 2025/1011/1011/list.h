#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int LTDataType;
typedef struct ListNode {
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode; 

//void LTInit(LTNode** pphead);
LTNode* LTInit();

void LTPushBack(LTNode* phead, LTDataType x);
void LTPushFront(LTNode* phead, LTDataType x);

void LTPopBack(LTNode* phead);
void LTPopFront(LTNode* phead);

LTNode* LTFind(LTNode* phead, LTDataType x);
void LTInsert(LTNode* pos, LTDataType x);
void LTErase(LTNode* pos);

bool LTEmpty(LTNode* phead);
void LTPrint(LTNode* phead);
void LTDestroy(LTNode** pphead);