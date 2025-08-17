#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("********************\n");
	printf("*****0.退出游戏*****\n");
	printf("*****1.开始游戏*****\n");
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
		printf("请选择：");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏");
				break;
			default:
				printf("输入错误，请重新输入：");
				break;
		}
	} while (input);
	return 0;
}