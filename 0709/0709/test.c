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
	//9*9����ά���� ��[]��[] ���������0-8 ������ ��left ��right ��up ��down �������� ����++ ����� ��Ϸ�жϽ��� �ո��ж� a,b���� ��[a] [b]Ϊ�ո� �жϸ����˸� 
	//�õ�˼· �������� һ������ һ����״̬ ��һȦ11*11��ֻ��[1][1]��[9][9]֮����� ����ʹ���ַ�����'0''1'
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	DisplayBoard(show, ROW, COL); // ��ӡ��ʾ����
	//DisplayBoard(mine, ROW, COL); ��ӡʵ������
	

	SetMine(mine, ROW, COL);//��������
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine,show,ROW,COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}