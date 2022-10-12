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
	printf("*****      5.SHOW      6.SORT     *******\n");
	printf("*****      0.EXIT                 *******\n");
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
void ShowContact(struct Contact* pc)
{
	printf("%-20s\t%-5s\t%-12s\t%-5s\t%-30s\n", "姓名", "性别", "电话", "年龄", "地址");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5s\t%-12s\t%-5d\t%-30s\n", pc->data[i].name, pc->data[i].sex, pc->data[i].tele, pc->data[i].age, pc->data[i].addr);
	}
}