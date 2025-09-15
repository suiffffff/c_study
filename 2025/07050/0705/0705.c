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


//找100-200素数 
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
//			printf("%d是素数\n", i);
//	}
//	return 0;
//}

//#include "stdio.h"
//#include "stdlib.h"
//include "string.h"
//int main()
//{
//	system("shutdown -s -t 60");
//	printf("系统将在60秒后关机,输入哇哈哈取消关机\n");
//	char input[100] = { 0 };
//	again:
//	scanf("%s", input);
//	if (strcmp(input, "哇哈哈") == 0)
//	{
//		system("shutdown -a");
//		printf("关机已取消,哇哈哈\n");
//	}
//	else
//	{
//		printf("糟糕啦，快快重新输入\n");
//		goto again;
//	}
//	return 0;
//}
//#include "stdio.h"
//#include "stdlib.h"
//#include "time.h"
//int main()
//{
//	srand((unsigned int)time(NULL)); // 初始化随机数种子 
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
	printf("**********0.退出游戏**********\n");
	printf("**********1.开始游戏**********\n");
	printf("******************************\n");
}
void game()
{
	printf("猜数字游戏开始了,请猜一个1-100之间的数字\n");
	int num = rand() % 100 + 1; // 随机生成1-100之间的数字
	int guess = 0;
	while (guess != num)
	{
		printf("请输入你猜的数字: ");
		scanf("%d", &guess);
		if (guess < num)
			printf("你猜的数字小了\n");
		else if (guess > num)
			printf("你猜的数字大了\n");
		else
		{
			printf("恭喜你，猜对了！\n");
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
			printf("退出游戏\n");
			break;
		case 1:
			game();
		default:
			printf("请输入一个正确的数\n");
			break;
		}
	} while (input);
	return 0;
}