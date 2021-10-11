#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
//ʵ��һ��ͨѶ¼  �洢1000����  ������ɾ���



void menu()
{
	printf("**************************************\n");
	printf("***** 1. add           2. del ********\n");
	printf("***** 3. search        4. modify *****\n");
	printf("***** 5. show          6. sort *******\n");
	printf("*****          0. exit     ***********\n");
	printf("**************************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
int main()
{
	int input = 0;
	//����һ��ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	//�����Է������˵���Ϣ �ռ䲻�� ��������

	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			//����ͨѶ¼
			SaveContact(&con);
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}


//�ļ��İ汾��
//1 �˳�ͨѶ¼��ʱ�� ������Ϣ���ļ���ȥ  
//2 ��������ͨѶ¼��ʱ�� �ܹ���ͨѶ¼����Ϣչʾ������Ҳ���ǰ��ļ���Ϣ���ص������У�
//3 �˳�ͨѶ¼��ʱ�� Ӧ�ñ�����Ϣ��SaveContact�� Ȼ������ͨѶ¼