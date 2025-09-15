#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 1;a <+ 100;a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d是3的倍数\n",a);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		d = a, a = b, b = d;
//	}
//	if(a > c)
//	{
//		d = a, a = c, c = d;
//	}
//	if(b>c)
//	{
//		d = b, b = c, c = d;
//	}
//	printf("%d>%d>%d", c, b, a);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	while (a < 9)
//	{
//		a++;
//		b = 0;
//		while(b< 9)
//		{
//			b++;
//			printf("%d*%d=%d ", a, b, a * b);
//		}
//	}
//	return 0;
//}
//void bubble_sort(int arr[], int len)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0;i < len - 1;i++)
//	{
//		for (j = 0;j < len - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//int main()
//{
//	int num = 10;
//	int arr[10] = { 0 };
//	while(num)
//	{
//		scanf("%d", arr[num - 1]);
//		num--;
//	}
//	bubble_sort(arr, 10);
//	printf("10个整数最大的是%d\n", arr[9]);
//	return 0;
//}
//int main()
//{
//	float a = 1.0f;
//	int flag = 1;
//	int num1 = 1;
//	int num2 = 0;
//	while (flag)
//	{
//		if(num1 % 2 == 0)
//		{
//			a -= (float)1 / num1;
//		}
//		else
//		{
//			a += (float)1 / num1;
//		}
//		num1++;
//		if(num1== 100)
//		{
//			flag = 0;
//		}
//	}
//	printf("1-1/2+1/3-1/4+...+1/99=%f\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	for(i=1;i<100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			num++;
//		}
//		if (i / 10 == 9)
//		{
//			num++;
//		}
//	}
//}

//int main()
//{
//	int i = 0, j = 0;
//	for(i=100;i<200;i++)
//	{
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j==i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for(year=1000;year<2000;year++)
//	{
//		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d年是闰年\n", year);
//		}
//	}
//}
int main()
{
	int i = 0, j = 0;
	int num = 0, tem = 0,max = 0;
	scanf("%d %d", &i,&j);
	if(i > j)
	{
		tem = j;
	}
	else
	{
		tem = i;
	}
	for (num = 1;num <= tem;num++)
	{
		if(i%num == 0 && j % num == 0)
		{
			max = num;
		}
	}
	printf("最大公约数是%d\n", max);
	return 0;
}