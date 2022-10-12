#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

// ��ʾһ���˵���Ϣ
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

// ����ͨѶ¼
struct Contact
{
	struct PeoInfo data[MAX];
	int sz;
};
void menu();
// ��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);
// �����˵���Ϣ��ͨѶ¼
void AddContact(struct Contact* pc);
// ��ӡ�˵���Ϣ��ͨѶ¼
void ShowContact(struct Contact* pc);

