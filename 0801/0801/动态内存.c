#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//#include "stdlib.h"
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for(i=0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//	int* p2 = (int*)realloc(p, 10 * sizeof(int));
//	p2 = NULL;
//	if (p2 == NULL)
//	{
//		printf("Memory reallocation failed.\n");
//		free(p);
//		return 1;
//	}
//	p = p2;
//	for(i=5; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//#include "stdlib.h"
//struct s{
//	int a;
//	int arr[];
//};
//int main()
//{
//	struct s* ps = (struct s*)malloc(sizeof(struct s) + 5 * sizeof(int));
//	if (ps == NULL) 
//	{
//		perror("ps");
//		return 1;
//	}
//	ps->a = 10;
//	for (int i = 0; i < 5; i++) 
//	{
//		ps->arr[i] = i + 1;
//	}
//	struct s* ps2 = (struct s* )realloc(ps, sizeof(struct s) + 10 * sizeof(int));
//	if(ps2 == NULL) 
//	{
//		perror("ps2");
//		free(ps);
//		return 1;
//	}
//	ps = ps2;
//	free(ps2);
//	ps2 = NULL;  
//	return 0;
//}
struct s {
	int a;
	int* arr;
};
int main()
{
	printf("sizeof(struct s) = %zu\n", sizeof(struct s));
	return 0;
}