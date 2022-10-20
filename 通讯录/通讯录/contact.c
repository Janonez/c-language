#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

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

// 初始化通讯录 - 静态版本
//void InitContact(struct Contact* pc)
//{
//	pc->sz = 0;
//	// void* memset(void* ptr, int value, size_t num);
//	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
//}

int check_capacity(struct Contact* pc);
//加载文件中的信息，到通讯录中
void LoadContact(struct Contact* pc)
{
	// 打开文件
	FILE* pfr = fopen("data.txt", "rb");
	if (pfr == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	// 读文件
	struct PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfr))
	{
		//考虑增加容量的问题
		check_capacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	// 关闭文件
	fclose(pfr);
	pfr = NULL;
}


// 初始化通讯录 - 动态版本
void InitContact(struct Contact* pc)
{
	assert(pc);
	// void* malloc (size_t size);
	pc->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact()");
		return; // return 后面也可以不跟任何数据，表示什么也不返回，仅仅用来结束函数。
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	//加载文件中的信息，到通讯录中
	LoadContact(pc);
}

// 释放内存
void DestoryContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

// 增加人的信息到通讯录 - 静态版本
//void AddContact(struct Contact* pc)
//{
//	// 判断
//	if (pc->sz == 100)
//	{
//		printf("通讯录已满，无法添加数据\n");
//		return;
//	}
//	// 添加人的信息
//	printf("请输入名字：");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入性别：");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入电话：");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入年龄：");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入地址：");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("成功添加联系人\n");
//}
 
// 检查容量动态增加内存函数
int check_capacity(struct Contact* pc)
{
	if (pc->capacity == pc->sz)
	{
		// void* realloc (void* ptr, size_t size);
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(struct PeoInfo));
		if (ptr == NULL)
		{
			perror("AddContact()");
			return 1;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
			return 0;
		}
	}
	else
		return 0;
}
// 增加人的信息到通讯录 - 动态增长的版本
void AddContact(struct Contact* pc)
{
	// 判断
	assert(pc);
	if (1 == check_capacity(pc))
	{
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

//// 清空所有联系人
//void FormatContact(struct Contact* pc)
//{
//	printf("是否清空所有联系人？（1/0）\n");
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 1)
//	{
//		InitContact(pc);
//		printf("成功清空联系人\n");
//	}
//	else
//		printf("取消清空联系人\n");
//}


// 保存通讯录信息到文件
void SaveContact(struct Contact* pc)
{
	// 打开文件
	FILE* pfw = fopen("data.txt", "wb");
	if (pfw == NULL)
	{
		perror("SaveContact::fopen");
		return;
	}
	// 写文件
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(struct PeoInfo), 1, pfw);
	}
	// 关闭文件
	fclose(pfw);
	pfw = NULL;
}