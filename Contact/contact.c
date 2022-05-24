#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->sz = 0;//设置通讯录最初只有0个元素
}

void AddContact(struct Contact* ps)
{
	if (ps->sz == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->sz].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->sz].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->sz].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->sz].addr);

		ps->sz++;
		printf("添加成功\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->sz; i++)
		{
			printf("%-20s\t %-4d\t %-5s\t %-12s\t %-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			break;
		}
	}
	//2.删除
	if (i == ps->sz)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		//删除数据
		int j = 0;
		for (j = 0; j <ps->sz-1 ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->sz--;
		printf("删除成功\n");
	}
}