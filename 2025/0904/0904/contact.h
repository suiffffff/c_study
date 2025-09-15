#pragma once

#define MAX_NAME 20
#define MAX_GENDER 5
#define MAX_TEL 20
#define MAX_ADDR 30

typedef struct personInfo
{
	char name[MAX_NAME];
	char gender[MAX_GENDER];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
}peoInfo;

typedef struct SeqList Contact;

void ContactInit(Contact* con);
void ContactDestroy(Contact* con);
void ContactAdd(Contact* com);
void ContactDel(Contact* con);
void ContactModify(Contact* con);
void ContactFind(Contact* con);
void ContactShow(Contact* con);