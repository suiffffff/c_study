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

#include "stdio.h"
#include "stdlib.h"
int main()
{
	system("shutdown -s -t 60");
	printf("ϵͳ����60���ػ�,�����۹���ȡ���ػ�\n");
	char input[100] = { 0 };
	again:
	scanf("%s", input);
	if (strcmp(input, "�۹���") == 0)
	{
		system("shutdown -a");
		printf("�ػ���ȡ��,�۹���\n");
	}
	else
	{
		printf("������������������\n");
		goto again;
	}
	return 0;
}