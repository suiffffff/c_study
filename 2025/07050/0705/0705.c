#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for(i=1;i<=10;i++)
//		printf("%d ", i);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int i = 0, a = 0;
//	for (i = 0; i <= 100; i += 3)
//	{
//			a = a + i;
//	}
//	printf("%d", a);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		printf("%d", i);
//	}
//	while (i <= 9);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int count = 0, num = 0;
//	scanf("%d", &num);
//	do
//	{
//		count++;
//		num /= 10;
//	} 
//	while (num != 0);
//	printf("%d", count);
//	return 0;
//}


//��100-200���� 
//#include "stdio.h"
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101;i <= 200;i += 2)
//	{
//		int j = 0, flag = 1;
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d������\n", i);
//	}
//	return 0;
//}

//#include "stdio.h"
//#include "stdlib.h"
//include "string.h"
//int main()
//{
//	system("shutdown -s -t 60");
//	printf("ϵͳ����60���ػ�,�����۹���ȡ���ػ�\n");
//	char input[100] = { 0 };
//	again:
//	scanf("%s", input);
//	if (strcmp(input, "�۹���") == 0)
//	{
//		system("shutdown -a");
//		printf("�ػ���ȡ��,�۹���\n");
//	}
//	else
//	{
//		printf("������������������\n");
//		goto again;
//	}
//	return 0;
//}
//#include "stdio.h"
//#include "stdlib.h"
//#include "time.h"
//int main()
//{
//	srand((unsigned int)time(NULL)); // ��ʼ����������� 
//	printf("%d\n", rand()%100+1);
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void menu()
{
	printf("******************************\n");
	printf("**********0.�˳���Ϸ**********\n");
	printf("**********1.��ʼ��Ϸ**********\n");
	printf("******************************\n");
}
void game()
{
	printf("��������Ϸ��ʼ��,���һ��1-100֮�������\n");
	int num = rand() % 100 + 1; // �������1-100֮�������
	int guess = 0;
	while (guess != num)
	{
		printf("��������µ�����: ");
		scanf("%d", &guess);
		if (guess < num)
			printf("��µ�����С��\n");
		else if (guess > num)
			printf("��µ����ִ���\n");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
		default:
			printf("������һ����ȷ����\n");
			break;
		}
	} while (input);
	return 0;
}