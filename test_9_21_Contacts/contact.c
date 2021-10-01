#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


//��ʼ��ͨѶ¼  ��̬�汾
//void InitContact(struct Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
//}

//��̬�汾
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	pc->data = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
	//ÿ��Ԫ�ض��� struct PeoInfo ����
	pc->capacity = DEFAULT_SZ;
}


//������ϵ�� ��̬�汾
//void AddContact(struct Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼����\n");
//	}
//	else
//	{
//		printf("����������\n");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("����������\n");
//		scanf("%d", &pc->data[pc->sz].age);//��Ϊ age ��һ������ ����Ҫȡ��ַ
//		printf("�������Ա�\n");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("������绰\n");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("�������ַ\n");
//		scanf("%s", pc->data[pc->sz].addr);
//		printf("��ӳɹ�\n");
//		pc->sz++;
//	}
//}


//��̬�汾
void AddContact(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//����
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;
			printf("�ռ��㹻�����������ϵ��\n");
		}
		else
		{
			printf("�ռ䲻�㣬�޷������ϵ��\n");
			return -1;
		}
	}
	//���� ��¼�������˵���Ϣ
	printf("����������\n");
	scanf("%s", pc->data[pc->sz].name);//pc->sz ʱ�����±�
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




//��ʾ���е���ϵ��
void ShowContact(struct Contact* pc)
{
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}


//����
int FindContactByName(const struct Contact* pc, const char* name)
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	//�Ҳ�����
	return -1;
}


//ɾ��ָ����ϵ��
void DelContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	char name[NAME_MAX];
	printf("������Ҫɾ���˵�����\n");
	scanf("%s", name);

	//����
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		//ɾ��
		for (int j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
}


//������ϵ��
void SearchContact(const struct Contact* pc)
{
	printf("������Ҫ�����˵�����\n");
	char name[NAME_MAX];;
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("û���ҵ�����ϵ��\n");
	}
	else
	{
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n", pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex, pc->data[pos].tele, pc->data[pos].addr);
	}
}


//�޸���ϵ��
void ModifyContact(struct Contact* pc)
{
	printf("������Ҫ�޸��˵�����\n");
	char name[NAME_MAX];;
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("�������µ�����\n");
		scanf("%s", pc->data[pos].name);
		printf("�������µ�����\n");
		scanf("%d", &pc->data[pos].age);//��Ϊ age ��һ������ ����Ҫȡ��ַ
		printf("�������µ��Ա�\n");
		scanf("%s", pc->data[pos].sex);
		printf("�������µĵ绰\n");
		scanf("%s", pc->data[pos].tele);
		printf("�������µĵ�ַ\n");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}


//����ͨѶ¼
void DestroyContact(struct Contact* pc)
{
	//��Ϊֻ�� data �� malloc ������  ����ֱ�Ӱ������پ�����
	free(pc->data);
}