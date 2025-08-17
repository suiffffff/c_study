#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
 
void InitBoard(char board[ROWS][COLS],int rols,int cols, char set)
{
	int a = 0, b = 0;
	for (a = 0;a < rols;a++)
	{
		for (b = 0;b < cols;b++)
		{
			board[a][b] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("------------扫雷----------\n");
	int i = 0;
	int j = 0;
	for (j = 0; j <= 9; j++)
	{
		printf("%d ", j); // 打印列号
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i); // 打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------扫雷----------\n");
}

void SetMine(char board[ROW][COL], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (board[x][y] = '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char board[ROWS][COLS], int x, int y)
{
	int num = 0;
	int a = 0, b = 0;
	for (a = x - 1;a <= x + 1;a++)
	{
		for (b = y - 1;b <= y + 1;b++)
		{
			num = num + board[a][b];
		}
	}
	return num - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row,int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win < row * col - EASY_COUNT)
	{
		printf("请输入你要查询的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了！\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count;
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入:");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("扫雷成功！\n");
		DisplayBoard(show, ROW, COL);
	}
}