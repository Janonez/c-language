#pragma once
#include <stdio.h>
#include <string.h>

// 表示一个人的信息
struct PeoInfo
{
	char name[20];
	char sex[5];
	char tele[12];
	int age;
	char addr[30];
};

struct Contact
{
	struct PeoInfo data[100];
	int sz;
};