#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int main()//����� ����ˮ���� 1ƿ��ˮ1Ԫ 2����ƿ���Ի�һƿ��ˮ ��20Ԫ���Ժȶ�����ˮ
//20��20ƿ ��ƿ��10ƿ �ٻ�5ƿ �ٻ���ƿ ������ƿ �ٻ�һƿ �õ�������ƿ �ٻ�һƿ һ��39ƿ   ���Կ��Է�Ϊ������ �򵽵�һ���� ������һ����
{
	int money = 0;
	int total = 0;//total��������
	int empty = 0;//ͳ�ƿ�ƿ
	scanf("%d", &money);//����Ǯ��
	total = money;//���������ˮ
	empty = money;//��ƿ������
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;//�ܻ�������ˮ �õ��Ŀ�ƿ �ټ��ϻ�֮��ʣ�µĿ�ƿ
	}
	//if (money == 0)//ͨ���ҹ��ɷ��ֻ���������
	//	total = 0;
	//else
	//	total = 2 * money - 1;//ͨ���ҹ��ɷ��ֻ���������
	printf("total=%d\n", total);
	return 0;
}

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n",(*p).name);
//	return;
//}
//int main()//�����������Ľ����ʲô
//{
//	struct stu students[3] = { {9801,"zhang",20} , {9802, "wang", 19},{9803,"zhao",18} };//����Ԫ�س�ʼ���� zhang wang zhao
//	fun(students + 1);//students����Ԫ��zhang�ĵ�ַ +1 ָ��wang ���Դ𰸾���wang
//	return 0;
//}

//struct S
//{
//	int a;
//	int b;
//};
//int main()//����������Դ�ӡʲô����
//{
//	struct S a, * p = &a;
//	a. a = 99;//ǰһ���ǽṹ����� ��һ���ǽṹ���Ա
//	printf("%d\n", a.a);//���Դ�ӡ a.a    p->a   (*p).a
//	return 0;
//}