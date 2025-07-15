#define _CRT_SECURE_NO_WARNINGS 1
int Sum(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Sum(n - 1);
}