#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>;
#include<time.h>;
#include<string.h>



////��������Ϸ
////1 �����������һ�� 1-100 ������   2 ��ҿ�ʼ������   3 ����¶��� ����ʾ�¶���  
////4 ���û�¶� ����ʾ�´��˻��߲�С��  5 ���Է�����
//
////0x123  ��16����   0123  �ǰ˽���
//void menu()
//{
//	printf("*******************************\n");
//	printf("**********  1. play  **********\n");
//	printf("**********  0. exit  **********\n");
//}
//void game()
//{
//	int guess = 0;
//	//1 ���������
//	int ret = rand() % 100 + 1;//ʹ��rand���� ��������� ÿ�ε���rand֮ǰ Ӧ����srand������������
//	//����1-100   % 100 ֮��õ����������� 0-99  ������+1 ���� 1-100��������  Ӧ��ÿ������֮���ٲ�
//	 
//	//2 ������
//	while (1)//ʹѭ��һֱΪ�棬ֱ���ŶԲ�����ѭ��
//	{	
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�� �¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//����ִ��һ�� ������do while()  ѭ��
//	srand((unsigned int) time(NULL));//ʹ��srand������������  ��ҪƵ������  ����㲻���ʱ�������Ҳһ����
//	//������������ҲҪ��  ��Ϊ���������ʱ��  һֱ���ڱ仯  ���Կ�����ʱ��������������  
//	//����ֻҪ����ȥʱ���������  ���ʱ����ķ���  ��time ���� 
//	do
//	{
//		menu();
//		printf("��ѡ��:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default :
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//goto ���   ����ĳ���ط�  ������ǰ�� Ҳ����������  ���ҳ����ִ������  ����һ���������ѭ��
//
//������Ҫ�� goto ���  

//int main()
//{
//flag://��һ����ǣ�
//	printf("haha\n");
//	printf("haha\n");
//	printf("haha\n");
//	printf("haha\n");
//	goto flag;//��flag�ĵط�
//	return 0;
//}


//�ػ�����  ֻҪ������������  ���Ծ͵���ʱһ���� һ���Ӻ�͹ػ� �����һ���������� �������� ��ȡ���ػ�

int main()
{
	//�ػ�  ���ҵ���ʱ   �ػ�����  shutdown -s -t 60    -sʹ��ʾ���ùػ�  -tʹ��ʾ��ƹػ�
	// shutdown -a  ��ȡ���ػ�
	
	char input[20] = { 0 };
	system("shutdown -s -t 60");//ִ��ϵͳ����  �ػ�
//again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))//�����ַ����Ƚ� ������ ==  Ӧ����strcmp
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}

	//Ҳ������ѭ����ʵ��
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);
		if (0 == strcmp(input, "������"))//�����ַ����Ƚ� ������ ==  Ӧ����strcmp
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}