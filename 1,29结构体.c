#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//����:char int double....
//��-���Ӷ�����ߣ����䣬���֤����....
//��-���Ӷ��������������磬����.....
//�������Ӷ���--�ṹ������--�Լ������������
//struct�ṹ��ؼ���
//����һ���ṹ������
//char name[20];����
//int age;����
//char sex[5];�Ա�
//char id[15];ѧ��
struct Book //�������������
{
	char name[20];//c���Գ������
	short price;//55
};//����ֺŲ���ȱ�٣���������������
int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	//b1.name = "c++"; //name���Ǳ�����������--��ַ�����Բ���������
	strcpy(b1.name,"C++" );// �����ǰ�C++��������name����ȥ  strcpy=string copy-�ַ������� Ҫ�ĵĻ�����Ҫ����
	printf("%s\n", b1.name);
	//strcpy�Ǹ��⺯��,��������ͷ�ļ� string.h
	//struct Book* pb =&b1;//struct Book*��һ��ָ������
	//����pb��ӡ�������ͼ۸�
	//  . ������Ӧ�õ��ṹ�����  . �����ǳ�Ա
	// ->�ṹ��ָ�룬ָ�����  ->��Ա
	//printf("%s\n", pb->name);//��˼��pbָ��b1��name��Ա
	//printf("%d\n", pb->price);
	////printf("%s\n", (*pb).name);//%s��ӡ����   ���ֿ��Լ򻯣�����
	////printf("%d\n", (*pb).price);
	//printf("����:%s\n",b1.name);//%s��ӡ�ַ���
	//printf("�۸�:%dԪ\n", b1.price);
	//b1.price = 15;//��������������Ϊprice�Ǳ�����name���Ǳ��������飬���Բ���������
	//printf("�޸ĺ�ļ۸�=%d\n", b1.price);
	return 0;
}