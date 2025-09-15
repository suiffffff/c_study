#include "contact.h"
#include "SeqList.h"
#include <string.h>

void ContactInit(Contact* con)
{
	SLInit(con);
}
void ContactDestroy(Contact* con)
{
	SLDestroy(con);
}
void ContactAdd(Contact* con)
{
	peoInfo info;
	printf("����������:>\n");
	scanf("%s", info.name);
	printf("�������Ա�:>\n");
	scanf("%s", info.gender);
	printf("����������:>\n");
	scanf("%d", &info.age);
	printf("������绰:>\n");
	scanf("%s", info.tel);
	printf("�������ַ:>\n");
	scanf("%s", info.addr);
	SLPushBack(con, info);
}

int FindByName(Contact* con, char name[])
{
	for (int i = 0;i < con->size;i++)
	{
		if (0 == strcmp(con->arr[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void ContactDel(Contact* con)
{
	char name[MAX_NAME];
	printf("������ɾ������ϵ��������");
	scanf("%s", name);
	int find = FindByName(con, name);
	if(find == -1)
	{
		printf("Ҫɾ������ϵ�˲����ڣ�\n");
		return;
	}
	else
	{
		SLErase(con, find);
		printf("ɾ���ɹ���\n");
	}
}
void ContactModify(Contact* con)
{
	char name[MAX_NAME];
	printf("�������޸ĵ���ϵ��������");
	scanf("%s", name);
	int find = FindByName(con, name);
	if (find == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲����ڣ�\n");
		return;
	}
	else
	{
		printf("�������µ�����:>\n");
		scanf("%s", con->arr[find].name);
		printf("�������µ��Ա�:>\n");
		scanf("%s", con->arr[find].gender);
		printf("�������µ�����:>\n");
		scanf("%d", &con->arr[find].age);
		printf("�������µĵ绰:>\n");
		scanf("%s", con->arr[find].tel);
		printf("�������µĵ�ַ:>\n");
		scanf("%s", con->arr[find].addr);
		printf("�޸ĳɹ���\n");
	}
}
void ContactFind(Contact * con)
{
	char name[MAX_NAME];
	printf("��������ҵ���ϵ��������");
	scanf("%s", name);
	int find = FindByName(con, name);
	if (find == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲����ڣ�\n");
		return;
	}
	else
	{
		printf("%s %s %d %s %s\n", con->arr[find].name, con->arr[find].gender, con->arr[find].age, con->arr[find].tel, con->arr[find].addr);
	}
}
void ContactShow(Contact* con)
{
	printf("%s %s %s %s %s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (int i = 0;i < con->size;i++)
	{
		printf("%s %s %d %s %s\n", con->arr[i].name, con->arr[i].gender, con->arr[i].age, con->arr[i].tel, con->arr[i].addr);
	}
}