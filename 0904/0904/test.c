#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include "contact.h"

//void ContactTest1()
//{
//	Contact con;
//	ContactInit(&con);
//	ContactAdd(&con);
//	ContactAdd(&con);
//	ContactShow(&con);
//	/*ContactDel(&con);*/
//	ContactModify(&con);
//	ContactFind(&con);
//	ContactShow(&con);
//	ContactDestroy(&con);
//}
//int main()
//{
//	ContactTest1();
//	return 0;
//}
void menu()
{
	printf("****************ͨѶ¼*****************\n");
	printf("****1.������ϵ��       2.ɾ����ϵ��****\n");
	printf("****3.�޸���ϵ��       4.������ϵ��****\n");
	printf("****5.չʾ��ϵ��       0.�˳�      ****\n");

}
int main()
{
	int op = 0;
	Contact con;
	ContactInit(&con);
	do {
		menu();
		printf("��ѡ��\n");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
				ContactAdd(&con);
				break;
			case 2:
				ContactDel(&con);
				break;
			case 3:
				ContactModify(&con);
				break;
			case 4:
				ContactFind(&con);
				break;
			case 5:
				ContactShow(&con);
				break;
			case 0:
				printf("�˳�ͨѶ¼");
				break;
			default:
				printf("�����������������");
				break;
		}
	} while (op);
	ContactDestroy(&con);
	return 0;
}