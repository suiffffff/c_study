#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	int num = rand() % 100 + 1; 
	int attempt = 0;
	int guess = 1;
	while (guess)
	{
		scanf("%d", &attempt);
		if (attempt > num)
		{
			printf("�´��ˣ�\n");
		}
		else if(attempt < num)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
	}
	return 0;
}