#pragma once
#include<stdio.h>
#include<string.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000


//描述人的信息
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};


//通讯录
struct Contact
{
	//存放1000个人的数据
	struct PeoInfo data[MAX];
	//记录当前通讯录有效信息的个数
	int sz;
};

//初始化通讯录
void InitContact(struct Contact* pc);

//增加联系人
void AddContact(struct Contact* pc);

//显示所有的联系人
void ShowContact(struct Contact* pc);
