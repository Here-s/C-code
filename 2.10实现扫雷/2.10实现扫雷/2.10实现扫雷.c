#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
//��ά�������ʡ���� ����ʡ����   һά������԰Ѹ���ʡ�Ե�

void menu()
{
	printf("***************************\n");
	printf("******1.play   0.exit******\n");
	printf("***************************\n");

}

void game()
{   //�Ȳ����ף����Ų���   �������� һ������׵���Ϣ ��һ���ṩ������Ų�������׵���Ϣ��ֻ����һ��չʾ������
    //Ϊ�˸��õı�ʾ������Ū��11*11�����飬�����м� 9������ ��11��Ϊ�˺���ʾ��Χ����
    //�����׵ķų�1 ���׵ķų�0 ʵ���׵ķ���
    //1�����úõ��׵���Ϣ
    char mine[ROWS][COLS] = { 0 };//�����ʼ��

    //2.�Ų�����׵���Ϣ
    char show[ROWS][COLS] = { 0 };//���������Ҫ���û���ӡ
	InitBoard(mine, ROWS, COLS,'0');//��ʼ������   Ϊ�˱����ʼ����һ��  ���԰�Ҫ��ʼ��������Ҳ����ȥ
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);//�ĳ�showҲ�ܰ�*��ӡ����
	//�Ȳ����� 
	SetMine(mine,ROW,COL);//�����׾��ǰ��׷ŵ�Mine��������  �����������һ�������ȥ  ���ﲻ��ROWS����ΪҪ�����׵�������9*9���������ﴫ��ȥ����9*9��
	//Ȼ��ɨ��
	//DisplayBoard(mine, ROW, COL);//mine���׵���Ϣ ���Բ���ӡ
	FindMine(mine,show,ROW,COL);//������  mine�����ҵ���Ϣ�ŵ�show��������ȥ  ��Ϊ�������show����������� ���Դ�ROW COL
}

void test()//������Ϸ
{
	int input = 0;
	srand((unsigned int)time(NULL));//��time�����ķ���ֵ��Ϊ�������
	do
	{
		menu();
		printf("��ѡ��:");
			scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);//��input����Ϊ��inputΪ0ʱΪ�� ��������ѭ������������Ϊ�� ����ѭ��
}
int main()
{
	test();
	return 0;
}