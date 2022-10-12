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
	printf("*****      5.SHOW      6.FORMAT   *******\n");
	printf("*****      7.SORT      0.EXIT     *******\n");
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
void ShowContact(const struct Contact* pc)
{
	printf("%-20s\t%-5s\t%-12s\t%-5s\t%-30s\n", "����", "�Ա�", "�绰", "����", "��ַ");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5s\t%-12s\t%-5d\t%-30s\n", pc->data[i].name, pc->data[i].sex, pc->data[i].tele, pc->data[i].age, pc->data[i].addr);
	}
}

// ����ͨѶ¼�е�����
static int FindByName(const struct Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
			return i;
	}
	return -1;
}

// ɾ��ͨѶ¼���˵���Ϣ
void DelContact(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫɾ������ϵ�˵����֣�");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("Ҫɾ�����˲�����\n");
	else
	{
		// ɾ��
		int i = 0;
		for (i = ret; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("�ɹ�ɾ��ָ����ϵ��\n");
	}
	
}


// ����ͨѶ¼��ָ����ϵ��
void SearchContact(const struct Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ�˵����֣�");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("Ҫ���ҵ��˲�����\n");
	else
	{
		printf("%-20s\t%-5s\t%-12s\t%-5s\t%-30s\n", "����", "�Ա�", "�绰", "����", "��ַ");
		printf("%-20s\t%-5s\t%-12s\t%-5d\t%-30s\n", pc->data[ret].name, pc->data[ret].sex, 
			pc->data[ret].tele, pc->data[ret].age, pc->data[ret].addr);
	}
}


// �޸�ָ����ϵ����Ϣ
void ModifyContact(struct Contact* pc)
{
	printf("������Ҫ�޸��˵����֣�");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("Ҫ�޸ĵ��˲�����\n");
	else
	{
		printf("���������֣�");
		scanf("%s", pc->data[ret].name);
		printf("�������Ա�");
		scanf("%s", pc->data[ret].sex);
		printf("������绰��");
		scanf("%s", pc->data[ret].tele);
		printf("���������䣺");
		scanf("%d", &(pc->data[ret].age));
		printf("�������ַ��");
		scanf("%s", pc->data[ret].addr);

		printf("�޸ĳɹ�\n");
	}
}

//// �����������
//int CmpByAge(const void* e1, const void* e2)
//{
//	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
//}
//
//// ����ͨѶ¼�е���Ϣ-������Ϊ��
//void SortContact(struct Contact* pc)
//{
//	// void qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
//	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByAge);
//}

// �����������
int CmpByName(const void* e1, const void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name,((struct PeoInfo*)e2)->name);
}

// ����ͨѶ¼�е���Ϣ-������Ϊ��
void SortContact(struct Contact* pc)
{
	// void qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByName);
}

// ���������ϵ��
void FormatContact(struct Contact* pc)
{
	printf("�Ƿ����������ϵ�ˣ���1/0��\n");
	int flag = 0;
	scanf("%d", &flag);
	if (flag == 1)
	{
		InitContact(pc);
		printf("�ɹ������ϵ��\n");
	}
	else
		printf("ȡ�������ϵ��\n");
}