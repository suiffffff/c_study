#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf(" ***********************************\n");
	printf(" **************0. exit**************\n");
	printf(" **************1. play**************\n");
	printf(" ***********************************\n");
}
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	DisplayBoard(show, ROW, COL); // 打印显示雷区
	//DisplayBoard(mine, ROW, COL); 打印实际雷区
	
	SetMine(mine, ROW, COL);//设置雷区
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine,show,ROW,COL);
	//FindBoard(mine, show, ROW, COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("开始游戏\n");
			game();
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}