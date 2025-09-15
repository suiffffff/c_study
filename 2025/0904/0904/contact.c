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
	printf("请输入姓名:>\n");
	scanf("%s", info.name);
	printf("请输入性别:>\n");
	scanf("%s", info.gender);
	printf("请输入年龄:>\n");
	scanf("%d", &info.age);
	printf("请输入电话:>\n");
	scanf("%s", info.tel);
	printf("请输入地址:>\n");
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
	printf("请输入删除的联系人姓名：");
	scanf("%s", name);
	int find = FindByName(con, name);
	if(find == -1)
	{
		printf("要删除的联系人不存在！\n");
		return;
	}
	else
	{
		SLErase(con, find);
		printf("删除成功！\n");
	}
}
void ContactModify(Contact* con)
{
	char name[MAX_NAME];
	printf("请输入修改的联系人姓名：");
	scanf("%s", name);
	int find = FindByName(con, name);
	if (find == -1)
	{
		printf("要修改的联系人不存在！\n");
		return;
	}
	else
	{
		printf("请输入新的姓名:>\n");
		scanf("%s", con->arr[find].name);
		printf("请输入新的性别:>\n");
		scanf("%s", con->arr[find].gender);
		printf("请输入新的年龄:>\n");
		scanf("%d", &con->arr[find].age);
		printf("请输入新的电话:>\n");
		scanf("%s", con->arr[find].tel);
		printf("请输入新的地址:>\n");
		scanf("%s", con->arr[find].addr);
		printf("修改成功！\n");
	}
}
void ContactFind(Contact * con)
{
	char name[MAX_NAME];
	printf("请输入查找的联系人姓名：");
	scanf("%s", name);
	int find = FindByName(con, name);
	if (find == -1)
	{
		printf("要查找的联系人不存在！\n");
		return;
	}
	else
	{
		printf("%s %s %d %s %s\n", con->arr[find].name, con->arr[find].gender, con->arr[find].age, con->arr[find].tel, con->arr[find].addr);
	}
}
void ContactShow(Contact* con)
{
	printf("%s %s %s %s %s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (int i = 0;i < con->size;i++)
	{
		printf("%s %s %d %s %s\n", con->arr[i].name, con->arr[i].gender, con->arr[i].age, con->arr[i].tel, con->arr[i].addr);
	}
}