#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>//time������Ҫ����ͷ�ļ�
void menu()
{
	printf("*********��������Ϸ********\n");
	printf("*****  1.play  0.exit  ****\n");
	printf("***************************\n");
}
//RAND MAX  ��0-32767  ֮��
void game()
{
	int ret = 0;//����һ��Ҫ�����ڵ�ǰ�������ǰ��
	int guess = 0;//���ղµ�����
	printf("��ʼ������\n");
	//1.����һ������� 2.������

	
	ret=rand()%100+1;//���������������1-100֮�䣬��Ϊrand������࣬ģһ��100��ʣ�µ���0-99֮�䣬���ԼӸ�1������1-100 rand���������������������
	//rand����Ų�������ѭ�����棬��Ȼ��һֱ�䣬��Զ�²���
	//printf("%d\n", ret);������ʾ��������Ȼ�Ͳ²���
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");//����Ĳ´󣬲�Сǧ����д����ȻҲ�²�����
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ÿ�ε�����һ��������Ӧ����srand�����һ������  ������ʱ��������������������ʼ�㣬��Ϊʱ��һֱ�ڱ仯
	//ʱ�������ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1,0:00��
	do//do while ѭ����������һ��ѭ���������ٽ���Ϸһ��
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d",  &input);
		switch (input)//���ڶ��֦
		{
		case 1:
			game();//����Ϸ�Ĺ���
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);//input�ոպã���Ϊ�����0�Ļ����պ�Ϊ�٣�����ѭ��
	return 0;
}