#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned)time(NULL));
//	int num = rand() % 100 + 1; 
//	int attempt = 0;
//	int guess = 1;
//	while (guess)
//	{
//		scanf("%d", &attempt);
//		if (attempt > num)
//		{
//			printf("猜大了！\n");
//		}
//		else if(attempt < num)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了！\n");
//			break;
//		}
//	}
//	return 0;
//}
#include <stdio.h>	

int main() {
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		char arr[a - 1][a - 1];
		for (b = 0;b < a - 1;b++)
		{
			for (c = 0;c < a;c++)
			{
				arr[b][c] = { "*" };
			}
		}
		for (b = 1;b < a - 2;b++)
		{
			for (c = 1;c < a - 2;c++)
			{
				arr[b][c] = { " " };
			}
		}
	}
	return 0;
}	
#include <stdio.h>

int main() {
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		char arr[a];
		for (b = 0;b < a / 2;b++)
		{
			arr[b] = { "*" };
			arr[a - 1 - b] = { "*" }
		}

	}
	return 0;
}