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


//�����˵���Ϣ
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};


//ͨѶ¼  ��̬�汾
//struct Contact
//{
//	//���1000���˵�����
//	struct PeoInfo data[MAX];
//	//��¼��ǰͨѶ¼��Ч��Ϣ�ĸ���
//	int sz;
//};


//Ĭ��ͨѶ¼��һ��ռ� �ռ䲻����ʱ�� ��һ��һ������   ��̬�汾
struct Contact
{
	struct PeoInfo* data;//ָ����Ƕ�̬�Ŀռ� 
	int sz;//��¼��ǰͨѶ¼��ʹ������
	//�� sz �� capacity һ��ʱ �Ͷ����������
	int capacity;//��¼ͨѶ¼�ĵ�ǰ�������
};


//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);

//������ϵ��
void AddContact(struct Contact* pc);

//��ʾ���е���ϵ��
void ShowContact(struct Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(struct Contact* pc);

//������ϵ��
void SearchContact(const struct Contact* pc);

//�޸���ϵ��
void ModifyContact(struct Contact* pc);

//����ͨѶ¼
void DestroyContact(struct Contact* pc);