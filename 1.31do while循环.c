#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//do while ѭ��  do ѭ����� while�����ʽ����    ������������ѭ�����жϣ����ʽΪ�����ѭ������������ѭ��  ����ѭ��һ��

int main()
{

	int i = 1;
	do
	{
		if (i == 5)
			continue;//������1��2��3��4 ����� ��ѭ������Ϊ���ﲻ���е������ˣ���������i=5���������������Բ���ӡ
		//continue ��������ѭ������Ĵ���
		printf("%d ", i);
		i++;
	} while (i <= 10);

	return 0;
}


//int main()
//{
//	 
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;//i ����5ʱֹͣѭ��������ֻ��ӡ1��2��3��4
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//int main()
//{
//	//��ӡ1-10  ��do whileѭ�� 
//	int i = 1;
//	do//���治��������ֻ�ܷ�һ����䣬���ڷ��������������ô�����
//	{
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//
//	return 0;
//}
