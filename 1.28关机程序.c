#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//����system ����ͷ�ļ�
#include<string.h>//����strcmp ����ͷ�ļ�
int main()
{
	char input[20] = { 0 };//����洢����
	//�ػ�����=�ػ�
	//system() ר������ִ��ϵͳ�����
	system("shutdown -s -t 60");//�ػ�����
again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ����������:������������ȡ���ػ�");
	scanf("%s",input );//%s���ַ�������˼
	if (strcmp(input, "������") == 0)//�ж�input��������ǲ��ǡ�������  strcmp-string compre
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
		return 0;
}
