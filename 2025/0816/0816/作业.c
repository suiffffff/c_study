#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int money = 20;
//	int coin = 0;
//	int num = 0;
//	while (money)
//	{
//		money --;
//		num++;
//		coin++;
//		if (coin == 2)
//		{
//			coin = 0;
//			money += 1;
//		}
//	}
//	printf("你可以喝%d杯汽水\n", num);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100000;i++)
//	{
//		int n1 = i;
//		int n2 = i;
//		int weishu = 0;
//		while (n1)
//		{
//			n1 = n1 / 10;
//			weishu++;
//		}
//		int sum = 0;
//		if (n2 < 10)
//		{
//			printf("%d是水仙花数\n", n2);
//		}
//		else
//		{
//			while (n2)
//			{
//				int mowei = n2 % 10;
//				n2 = n2 / 10;
//				int mowei1 = mowei;
//				int weishu1 = weishu;
//				for (weishu1;weishu1 > 1;weishu1--)
//				{
//					mowei = mowei * mowei1;
//				}
//				sum += mowei; 
//			}
//		}
//		if (sum == i)
//		{
//			printf("%d是水仙花数\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int num = 0;
//	scanf("%d", &i);
//	int i1 = i;
//	while (num < 5)
//	{
//		sum += i;
//		i = i * 10 + i1;
//		num++;
//	}
//	printf("%d\n", sum);
//	return 0;
//
//}
int main()
{
	int num = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d", &num);
	for (i=1;i<=num;i++)
	{
		for(j=1;j<=num-i;j++)
		{
			printf(" ");
		}
		for (k = 1;k <= 2 * i - 1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= num*2-1 - 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}