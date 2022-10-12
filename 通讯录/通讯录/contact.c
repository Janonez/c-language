#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, 100 * sizeof(struct PeoInfo));
}