#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#define DEFAULT_SZ 3
#define INC_SZ 2
// 表示一个人的信息
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

// 创建通讯录 - 静态版本
//struct Contact
//{
//	struct PeoInfo data[MAX];
//	int sz;
//};

// 创建通讯录 - 动态版本
struct Contact
{
	struct PeoInfo* data;// 指向了存放数据的空间
	int sz;// 已经放进去的信息
	int capacity;// 容量
};
// 释放内存
void DestoryContact(struct Contact* pc);

// 菜单
void menu();

// 初始化通讯录
void InitContact(struct Contact* pc);

// 增加人的信息到通讯录
void AddContact(struct Contact* pc);

// 打印人的信息到通讯录
void ShowContact(const struct Contact* pc);

// 删除通讯录中人的信息
void DelContact(struct Contact* pc);

// 查找通讯录中指定联系人
void SearchContact(const struct Contact* pc);

// 修改指定联系人信息
void ModifyContact(struct Contact* pc);

// 排序通讯录中的信息-以年龄为例
void SortContact(struct Contact* pc);

// 清空所有联系人
//void FormatContact(struct Contact* pc);

// 保存通讯录信息到文件
void SaveContact(struct Contact* pc);