#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


//初始化通讯录  静态版本
//void InitContact(struct Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
//}

//动态版本
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	pc->data = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
	//每个元素都是 struct PeoInfo 类型
	pc->capacity = DEFAULT_SZ;
}


//增加联系人 静态版本
//void AddContact(struct Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录满了\n");
//	}
//	else
//	{
//		printf("请输入名字\n");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("请输入年龄\n");
//		scanf("%d", &pc->data[pc->sz].age);//因为 age 是一个变量 所以要取地址
//		printf("请输入性别\n");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("请输入电话\n");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("请输入地址\n");
//		scanf("%s", pc->data[pc->sz].addr);
//		printf("添加成功\n");
//		pc->sz++;
//	}
//}


//动态版本
void AddContact(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//增容
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;
			printf("空间足够，可以添加联系人\n");
		}
		else
		{
			printf("空间不足，无法添加联系人\n");
			return -1;
		}
	}
	//不满 就录入新增人的信息
	printf("请输入名字\n");
	scanf("%s", pc->data[pc->sz].name);//pc->sz 时数组下标
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




//显示所有的联系人
void ShowContact(struct Contact* pc)
{
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}


//查找
int FindContactByName(const struct Contact* pc, const char* name)
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	//找不到了
	return -1;
}


//删除指定联系人
void DelContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	char name[NAME_MAX];
	printf("请输入要删除人的名字\n");
	scanf("%s", name);

	//查找
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("联系人不存在\n");
	}
	else
	{
		//删除
		for (int j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("删除成功\n");
	}
}


//查找联系人
void SearchContact(const struct Contact* pc)
{
	printf("请输入要查找人的名字\n");
	char name[NAME_MAX];;
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("没有找到此联系人\n");
	}
	else
	{
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n", "name", "age", "sex", "tele", "addr");
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n", pc->data[pos].name, pc->data[pos].age, pc->data[pos].sex, pc->data[pos].tele, pc->data[pos].addr);
	}
}


//修改联系人
void ModifyContact(struct Contact* pc)
{
	printf("请输入要修改人的名字\n");
	char name[NAME_MAX];;
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入新的名字\n");
		scanf("%s", pc->data[pos].name);
		printf("请输入新的年龄\n");
		scanf("%d", &pc->data[pos].age);//因为 age 是一个变量 所以要取地址
		printf("请输入新的性别\n");
		scanf("%s", pc->data[pos].sex);
		printf("请输入新的电话\n");
		scanf("%s", pc->data[pos].tele);
		printf("请输入新的地址\n");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功\n");
	}
}


//销毁通讯录
void DestroyContact(struct Contact* pc)
{
	//因为只有 data 是 malloc 出来的  所以直接把它销毁就行了
	free(pc->data);
}