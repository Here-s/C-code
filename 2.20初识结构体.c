#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//���ݽṹ������1 �������ݽṹ�� ˳�����˳�����У� �����ֿ��ֲ� ����������ϵ�� ջ����һ��Ԫ��  �Ƚ�ȥ�ĺ������ ����  2 �������ݽṹ��������  
//����һ��Ԫ�ؽ�ѹջ   ɾ��һ��Ԫ�ؽг�ջ

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()//���ε�ʱ���ѹջ, �κ�һ�κ������ö������ڴ��ջ������ռ�
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret=Add(a, b);
//
//	return 0;
//}

//typedef struct Stu//�ṹ�崫��  ѡ��ַ����ȥ
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void print1(Stu tmp)//��tmp������ ����ʲô���վ���ʲô
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//void print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);//
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//
//}
//int main()
//{
//	Stu s = { "����",40,"15155555555","��" };
//	//Ϊ�˴�ӡ�ṹ������ print2 ���� ��Ϊ��һ������ʱ��Ҳ��ѹջ ����ֽڴ�Ļ� Ҳ���ʱ�� �ή������    ָ�봫��ʱ�򴫵��ǵ�ַ �ֽ�С ��
//	print1(s);
//	print2(&s);
//	return 0;
//}

//�ṹ���Ա�ķ�����ͨ�� . �����ʵ�

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;//�ṹ���������һ���ṹ���Ա
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello byte\n";
//	struct T t = { "haha",{100,"806","hello word",2.50} ,arr};//������ʼ�� ��ʼ���ĵ�һ��Ԫ����ch ��������S�ṹ�� ���Ի���һ�������� ���һ����pc ��һ����ָ��
//	printf("%s\n",t.ch);//%s��ӡ����haha    t.ch ����t�����chԪ��
//	printf("%s\n", t.s.arr );//t.s���ǽṹ��s
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);//�ַ��� ������%s
//	return 0;
//}
//struct Point
//{
//	int x;
//	int y;
//}p1;//�������͵�ͬʱ�������p1 
//struct Point p2;//����ṹ�����p2
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];//sex�����Ա�
//}Stu;
//int main()//�ṹ������Ķ���ͳ�ʼ��
//{
//	Stu s1 = {"����",20,"15135030794","��"};//s1������ʱ�����ֵ ���ǳ�ʼ�� �ṹ������Ŷ��Ԫ�ص�ʱ��Ҳ�Ǵ�����
//	struct Stu s2 = { "����",30,"15135030794","����" };//s1 s1�Ѿ���ʼ��
//
//	return 0;
//}

//�ṹ��ĳ�Ա�����Ǳ���(��ͨ����)�����飬ָ�룬�����������ṹ��

//typedef struct Stu//����������д typedef ���ǽ��������������һ������ 
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;//����������ֽ�Stu   Stu������  ��������������ʱ�� дStu������

//struct Stu//struct �Ǹ��ṹ��ؼ���    Stu�ǽṹ���ǩ(����ô�� ����ô��)�����ʾѧ������˼   struct Stu-�ṹ������
//	//�����������ǽṹ���Ա   ����ѧ�����Ƿ����������������  ���� ���� �绰 �Ա� 
//{
//	char name[20];
//	short age;//���� ���� ������age
//	char tele[12];//12�Ǳ�֤�绰¼�꣬���ܴ�һ��\0
//	char sex[5];//sex�����Ա�
//
//}; s1, s2, s3;//����ķֺŲ�����   s1, s2, s3;  ����ȫ�ֵĽṹ�����
//int main()//�ṹ����һЩֵ�ļ���  �ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//{//��ѧ��Ϊ��
//
//	struct Stu s1;//�ṹ������Ĵ���  s�Ǿֲ��Ľṹ�����
//	Stu s2;
//	return 0;
//}