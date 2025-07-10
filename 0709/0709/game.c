#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{ 
	int i = 0;
	int j = 0;
	printf("------------ɨ��----------\n");
	for (j = 0; j <= 9; j++)
	{
		printf("%d ", j); // ��ӡ�к�
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i); // ��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------ɨ��----------\n");
}
void SetMine(char mine[ROWS][COLS],int row,int col)
{
	srand((unsigned int)time(NULL));
	int x = 0;
	int y = 0;
	int count = EASY_COUNT;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] != '1')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int GetMineCount(char mine[ROWS][COLS],int x, int y)
{
	int i = 0, j = 0;
	int count = 0;
	for(i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			count += (mine[x + i][y + j] - '0');
		}
	}
	return count;
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < col*row - EASY_COUNT)
	{
	printf("��������Ҫ���ҵ�λ��x�� y:");
	scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				char arr1[] = "GAME OVER";
				char arr2[] = "#########";
				
				int left = 0;
				int right = strlen(arr1) - 1;
				while (left <= right)
				{
					arr2[left] = arr1[left];
					arr2[right] = arr1[right];
					printf("%s\n", arr2);
					Sleep(1000);
					system("cls");
					left++;
					right--;
				}
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMineCount(mine,x,y);
				show[x][y] = count + '0'; // ������ת��Ϊ�ַ�
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("��������x(1-9),y(1-9)������������");
		}
		
	}
	if (win == col * row - EASY_COUNT)
	{
		printf("��ϲ�㣬ɨ�׳ɹ���\n");
		DisplayBoard(mine, ROW, COL);
	}
}