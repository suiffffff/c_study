#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//int Calculate(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Calculate(n - 1) + Calculate(n - 2);
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Calculate(i);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if(i==1||i==2)
//	{
//		printf("1");
//	}
//	else
//	{
//		int a = 1, b = 1, c = 0;
//		for (int j = 3; j <= i; j++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		printf("%d", c);
//	}
//}
//int Power(int n,int k)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if(k>0)
//	{
//		return n * Power(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);	
//	int ret = Power(n, k);
//	printf("%d", ret);
//}
//int DigitSum(int num,int count)
//{
//	if (num==0)
//	{
//		return count;
//	}
//	else
//	{
//		int tmp = 0;
//		tmp = num % 10;
//		count += tmp;
//	}
//	return DigitSum(num/10,count);
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num,count);
//	printf("%d", ret);
//	return 0;
//}
//int Factorial(int n)
//{
//	if(n == 0 || n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Factorial(n - 1);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = Factorial(num);
//	printf("%d", ret);	
//	return 0;
//}
//void print(int num)
//{
//	if(num ==0)
//	{
//		return;
//	}
//	else
//	{
//		printf("%d", num % 10);
//		print(num / 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int ret = 0;
//	for (i = 0;i < len;i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int a = 10, b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	return 0;
//}
//#include <stdio.h>
//int count_1(int n)
//{
//    int a = 0;
//    int count = 0;
//    for (a = 0;a < 32;a++)
//    {
//        if (((n >> a) & 1) == 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    int ret = count_1(i);
//    printf("%d", ret);
//    return 0;
//}
//void Fun(int n)
//{
//	int i = 0;
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Fun(num);
//	return 0;
//}
//int Fun(int a,int b)
//{
//	
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (!(((a >> i) & 1 ) == 0 && ((b >> i) & 1) == 0) && !(((a >> i) & 1) == 1 && ((b >> i) & 1) == 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Fun(a,b);
//	printf("%d", ret);
//	return 0;
//}
