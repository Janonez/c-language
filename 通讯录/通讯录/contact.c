#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
// ��ʼ��ͨѶ¼
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
}
// �˵�
void menu()
{
	printf("*****************************************\n");
	printf("*****      1.ADD       2.DEL      *******\n");
	printf("*****      3.SEARCH    4.MODIFY   *******\n");
	printf("*****      5.SHOW      6.SORT     *******\n");
	printf("*****      0.EXIT                 *******\n");
	printf("*****************************************\n");
}
// �����˵���Ϣ��ͨѶ¼
void AddContact(struct Contact* pc)
{
	// �ж�
	if (pc->sz == 100)
	{
		printf("ͨѶ¼�������޷��������\n");
		return;
	}
	// ����˵���Ϣ
	printf("���������֣�");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰��");
	scanf("%s", pc->data[pc->sz].tele);
	printf("���������䣺");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������ַ��");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("�ɹ������ϵ��\n");
}

// ��ӡ�˵���Ϣ��ͨѶ¼
void ShowContact(struct Contact* pc)
{
	printf("%-20s\t%-5s\t%-12s\t%-5s\t%-30s\n", "����", "�Ա�", "�绰", "����", "��ַ");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5s\t%-12s\t%-5d\t%-30s\n", pc->data[i].name, pc->data[i].sex, pc->data[i].tele, pc->data[i].age, pc->data[i].addr);
	}
}