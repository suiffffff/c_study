#define _CRT_SECURE_NO_WARNINGS 1
//#include "stdio.h"
//int main()
//{
//	printf("ab\b");
//	return 0;
//}
//#include "stdio.h"
//#include "stdbool.h"
//int main()
//{
//	bool flag = false;
//	if(flag)
//	{
//		printf("Hello, World!\n");
//	}
//	else
//	{
//		printf("Flag is false.\n");
//	}
//}
//#include "stdio.h"
//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	return 0;	
//}	
//#include "stdio.h"
//int main()
//{
//	short a = 2;
//	int b = 10;
//	printf("%zd\n", sizeof(a=b+1));
//	printf("%d\n", a + b);
//	return 0;
//	//�з���%d,�޷���%u
//}
//#include "stdio.h"
//#include "stdbool.h"
//int main()
//{
//	unsigned char age = 144;
//	printf("%d\n", age);
//	float height = 1.75f;// ʹ��f��׺��ʾfloat����
//	double weight = 4.99;
//	bool flag = true;
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	printf("%d\n", 10 / 4);
//	printf("%f\n", 10 / 4.0);
//	printf("%d\n", 10 % 3);	
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int a = 5;
//	int b = a++;
//	printf("%d\n", a); 
//	printf("%d\n", b);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int a = 1;
//	float b = 3.14f, c = 6.66f;
//	printf("a=%d\nc=%12f\n", a, b,c);
//	printf("a=%d\nc=%.2f\n", a, b,c);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	printf("%.3s", "abcdef");
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int score = 0;
//	printf("������ɼ�");
//	scanf("%d", &score);
//	printf("��ĳɼ���%d", score);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int a = 0, b = 0;
//	float c = 0.0f, d = 0.0f;
//	scanf("%d %d %f %f", &a, &b, &c, &d);
//	printf("%d\n%d\n%f\n%f", a, b, c, d);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	int ret = scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//	printf("ret=%d", ret);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	char se = '0';
//	scanf(" %c", &se);
//	printf("xxxx%cyyyy", se);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	int year = 0, month = 0, day = 0;
//	scanf("%d%*c%d%*c%d%*c", &year, &month, &day);//%*c��ֵ����
//	printf("%d%d%d", year, month, day);
//	return 0;
//}
//#include "stdio.h"
//int main()
//{
//	char num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	if (num % 2 == 0)
//	{
//		printf("�������������һ��������\n");
//	}
//	else
//	{
//		printf("������������ǣ�%d\n", num);
//	}
//	return 0;
//}
#include "stdio.h"
int main()
{
	int age = 0;
	printf("������������䣺");
	scanf("%d", &age);
	if (age <= 18)
		printf("����");
	else if (age <= 44)
		printf("����");
	else if (age <= 59)
		printf("����");
	else if (age <= 90)
		printf("����");
	else
		printf("������");
	return 0;
}