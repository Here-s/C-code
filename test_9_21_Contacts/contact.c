#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
}

//������ϵ��
void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("����������\n");
		scanf("%d", &pc->data[pc->sz].age);//��Ϊ age ��һ������ ����Ҫȡ��ַ
		printf("�������Ա�\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰\n");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ\n");
		scanf("%s", pc->data[pc->sz].addr);
		printf("��ӳɹ�\n");
		pc->sz++;
	}
}


//��ʾ���е���ϵ��
void ShowContact(struct Contact* pc)
{
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}