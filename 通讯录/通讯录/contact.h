#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

// 表示一个人的信息
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

// 创建通讯录
struct Contact
{
	struct PeoInfo data[MAX];
	int sz;
};
void menu();
// 初始化通讯录
void InitContact(struct Contact* pc);
// 增加人的信息到通讯录
void AddContact(struct Contact* pc);
// 打印人的信息到通讯录
void ShowContact(struct Contact* pc);

