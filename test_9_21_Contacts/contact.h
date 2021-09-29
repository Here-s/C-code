#pragma once
#include<stdio.h>
#include<string.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000


//�����˵���Ϣ
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};


//ͨѶ¼
struct Contact
{
	//���1000���˵�����
	struct PeoInfo data[MAX];
	//��¼��ǰͨѶ¼��Ч��Ϣ�ĸ���
	int sz;
};

//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);

//������ϵ��
void AddContact(struct Contact* pc);

//��ʾ���е���ϵ��
void ShowContact(struct Contact* pc);
