#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ�������洢���ڴ��еĶ�������1�ĸ���


int main()//��λ�뷽��
{
	int num = 0;//������ҳ�32��bitλ Ȼ������ ��λ��1 ���ԭ����1 ��λ��1 ��ô�����1 ˵��������1
	int count = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))//��λ��1  ��λ������
			count++;
	}
	printf("%d\n",count );
	return 0;
}

//int main()//������ �����-1�Ļ������0 ���Բ���  �Ż�֮������
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);//��ĿҲ����ͳ��num�Ĳ������м���1
//	//����3 -011 %2֮��ʣ�������һ��1  3/2�ǰ�������һ��1ȥ�� ������ʣ�����01
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}