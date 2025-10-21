#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

void test01()
{
	ST st;
	STInit(&st);
	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	while (!STEmpty(&st))
	{
		STDataType top = STTop(&st);
		printf("%d", top);
		STPop(&st);
	}
}
int main()
{
	test01();
	return 0;
}