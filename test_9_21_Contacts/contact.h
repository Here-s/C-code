#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000
#define DEFAULT_SZ 3


//描述人的信息
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};


//通讯录  静态版本
//struct Contact
//{
//	//存放1000个人的数据
//	struct PeoInfo data[MAX];
//	//记录当前通讯录有效信息的个数
//	int sz;
//};


//默认通讯录有一块空间 空间不够的时候 再一步一步增加   动态版本
struct Contact
{
	struct PeoInfo* data;//指向的是动态的空间 
	int sz;//记录当前通讯录的使用容量
	//当 sz 和 capacity 一样时 就对其进行扩容
	int capacity;//记录通讯录的当前最大容量
};


//初始化通讯录
void InitContact(struct Contact* pc);

//增加联系人
void AddContact(struct Contact* pc);

//显示所有的联系人
void ShowContact(struct Contact* pc);

//删除指定联系人
void DelContact(struct Contact* pc);

//查找联系人
void SearchContact(const struct Contact* pc);

//修改联系人
void ModifyContact(struct Contact* pc);

//销毁通讯录
void DestroyContact(struct Contact* pc);