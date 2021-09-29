#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


//初始化通讯录
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
}

//增加联系人
void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录满了\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入年龄\n");
		scanf("%d", &pc->data[pc->sz].age);//因为 age 是一个变量 所以要取地址
		printf("请输入性别\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话\n");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址\n");
		scanf("%s", pc->data[pc->sz].addr);
		printf("添加成功\n");
		pc->sz++;
	}
}


//显示所有的联系人
void ShowContact(struct Contact* pc)
{
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}