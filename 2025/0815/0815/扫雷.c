#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("********************\n");
	printf("*****0.�˳���Ϸ*****\n");
	printf("*****1.��ʼ��Ϸ*****\n");
	printf("********************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ");
				break;
			default:
				printf("����������������룺");
				break;
		}
	} while (input);
	return 0;
}