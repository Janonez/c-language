#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
// 初始化通讯录
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
}
// 菜单
void menu()
{
	printf("*****************************************\n");
	printf("*****      1.ADD       2.DEL      *******\n");
	printf("*****      3.SEARCH    4.MODIFY   *******\n");
	printf("*****      5.SHOW      6.FORMAT   *******\n");
	printf("*****      7.SORT      0.EXIT     *******\n");
	printf("*****************************************\n");
}
// 增加人的信息到通讯录
void AddContact(struct Contact* pc)
{
	// 判断
	if (pc->sz == 100)
	{
		printf("通讯录已满，无法添加数据\n");
		return;
	}
	// 添加人的信息
	printf("请输入名字：");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别：");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话：");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入年龄：");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入地址：");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("成功添加联系人\n");
}

// 打印人的信息到通讯录
void ShowContact(const struct Contact* pc)
{
	printf("%-20s\t%-5s\t%-12s\t%-5s\t%-30s\n", "姓名", "性别", "电话", "年龄", "地址");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5s\t%-12s\t%-5d\t%-30s\n", pc->data[i].name, pc->data[i].sex, pc->data[i].tele, pc->data[i].age, pc->data[i].addr);
	}
}

// 查找通讯录中的姓名
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

// 删除通讯录中人的信息
void DelContact(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要删除的联系人的名字：");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("要删除的人不存在\n");
	else
	{
		// 删除
		int i = 0;
		for (i = ret; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("成功删除指定联系人\n");
	}
	
}


// 查找通讯录中指定联系人
void SearchContact(const struct Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要查找的联系人的名字：");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("要查找的人不存在\n");
	else
	{
		printf("%-20s\t%-5s\t%-12s\t%-5s\t%-30s\n", "姓名", "性别", "电话", "年龄", "地址");
		printf("%-20s\t%-5s\t%-12s\t%-5d\t%-30s\n", pc->data[ret].name, pc->data[ret].sex, 
			pc->data[ret].tele, pc->data[ret].age, pc->data[ret].addr);
	}
}


// 修改指定联系人信息
void ModifyContact(struct Contact* pc)
{
	printf("请输入要修改人的名字：");
	char name[MAX_NAME];
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("要修改的人不存在\n");
	else
	{
		printf("请输入名字：");
		scanf("%s", pc->data[ret].name);
		printf("请输入性别：");
		scanf("%s", pc->data[ret].sex);
		printf("请输入电话：");
		scanf("%s", pc->data[ret].tele);
		printf("请输入年龄：");
		scanf("%d", &(pc->data[ret].age));
		printf("请输入地址：");
		scanf("%s", pc->data[ret].addr);

		printf("修改成功\n");
	}
}

//// 年龄排序规则
//int CmpByAge(const void* e1, const void* e2)
//{
//	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
//}
//
//// 排序通讯录中的信息-以年龄为例
//void SortContact(struct Contact* pc)
//{
//	// void qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
//	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByAge);
//}

// 年龄排序规则
int CmpByName(const void* e1, const void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name,((struct PeoInfo*)e2)->name);
}

// 排序通讯录中的信息-以名字为例
void SortContact(struct Contact* pc)
{
	// void qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByName);
}

// 清空所有联系人
void FormatContact(struct Contact* pc)
{
	printf("是否清空所有联系人？（1/0）\n");
	int flag = 0;
	scanf("%d", &flag);
	if (flag == 1)
	{
		InitContact(pc);
		printf("成功清空联系人\n");
	}
	else
		printf("取消清空联系人\n");
}